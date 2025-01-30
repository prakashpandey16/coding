#include <iostream>
using namespace std;

const int MOD = 1000000007;  // This is 10^9 + 7
const int N = 10;  // We want to calculate for the first 10 natural numbers

// Function to compute x^y under modulo m
long long modPow(long long x, long long y, int m) {
    long long result = 1;  // Start with the result as 1
    x = x % m;  // Ensure x is within the range of modulo m
    while (y > 0) {  // Loop until the exponent y is zero
        if (y & 1) {  // If y is odd, multiply the result with the current x
            result = (result * x) % m;
        }
        y = y >> 1;  // Divide y by 2
        x = (x * x) % m;  // Square x and apply the modulo
    }
    return result;  // Return the final result
}

// Function to compute factorial % MOD
long long factorial(int n, int mod) {
    long long result = 1;  // Start with 1 as the factorial of 0! is 1
    for (int i = 2; i <= n; i++) {  // Loop from 2 to n
        result = (result * i) % mod;  // Multiply the result with i and take modulo
    }
    return result;  // Return the factorial modulo mod
}

// Function to compute inverse factorial % MOD
long long inverseFactorial(int n, int mod) {
    long long fact = factorial(n, mod);  // First, compute n!
    return modPow(fact, mod - 2, mod);  // Then, compute its inverse using Fermat's theorem
}

int main() {
    for (int i = 1; i <= N; i++) {  // Loop through the first 10 natural numbers
        long long invFact = inverseFactorial(i, MOD);  // Calculate the inverse factorial
        cout << "Inverse factorial of " << i << " is: " << invFact << endl;  // Output the result
    }
    return 0;
}
