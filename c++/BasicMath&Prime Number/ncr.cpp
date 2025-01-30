#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;  // Define the modulus value for computations

// Function to compute (x^y) % m using modular exponentiation
long long modpow(long long x, long long y, long long m) {
    long long result = 1;
    x = x % m;  // Take x modulo m to prevent overflow
    while (y > 0) {
        // If y is odd, multiply result by x and take modulo m
        if (y & 1) {
            result = (result * x) % m;
        }
        // Right shift y by 1 (equivalent to dividing y by 2)
        y = y >> 1;
        // Square x and take modulo m
        x = (x * x) % m;
    }
    return result;
}

// Function to precompute factorials and their modular inverses up to n
void precompute(int n, vector<long long> &fact, vector<long long> &invfact) {
    fact[0] = 1;  // 0! is 1
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % mod;  // Compute factorial % mod
    }
    // Compute inverse factorial of n! using Fermat's Little Theorem
    invfact[n] = modpow(fact[n], mod - 2, mod);
    for (int i = n - 1; i >= 0; i--) {
        // Compute inverse factorial % mod using the previously computed inverse
        invfact[i] = (invfact[i + 1] * (i + 1)) % mod;
    }
}

// Function to calculate nCr (n choose r) % mod
long long nCr(int n, int r, vector<long long> &fact, vector<long long> &invfact) {
    if (r > n || r < 0) return 0;  // Invalid case for nCr
    // Compute nCr % mod using the precomputed factorials and inverses
    return (((fact[n] * invfact[r]) % mod) * invfact[n - r]) % mod;
}

int main() {
    int n, r;
    cin >> n >> r;  // Input values for n and r

    // Initialize vectors for factorials and their inverses
    vector<long long> fact(n + 1);
    vector<long long> invfact(n + 1);

    // Precompute factorials and inverse factorials
    precompute(n, fact, invfact);

    // Output the result of nCr % mod
    cout << nCr(n, r, fact, invfact) << endl;

    return 0;
}
