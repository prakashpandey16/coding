#include<iostream>
#include<math.h>
using namespace std;

// Function to calculate (base^expo) % mod using modular exponentiation
long long powermod(long long base, long long expo, long long mod) {
    long long result = 1;     // Initialize result to 1 (since anything raised to the power 0 is 1)
    base = base % mod;        // Take base modulo mod to keep it within the mod range and avoid overflow
    
    // Loop until the exponent becomes 0
    while (expo > 0) {
        // If expo is odd, multiply the current base with result
        if (expo % 2 == 1) {
            result = (result * base) % mod;  // Update result and take modulo to keep it within range
        }
        
        expo = expo >> 1;         // Halve the exponent (equivalent to expo = expo / 2)
        base = (base * base) % mod; // Square the base and take modulo to keep it within range
    }
    return result;  // Return the final computed result
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;  // Read inputs a, b, c, d from the user

    const int mod = 1e9 + 7;  // Define a large prime number as the modulus (commonly used in competitive programming)

    // Step 1: Calculate (c^d) % (mod-1)
    // This step avoids overflow in the next step by reducing the size of the exponent using Fermat's Little Theorem
    long long cpowd = powermod(c, d, mod - 1);

    // Step 2: Calculate (b^(c^d)) % (mod-1)
    // Again, we reduce the size of the exponent for the next calculation
    long long bpowcpowd = powermod(b, cpowd, mod - 1);

    // Step 3: Calculate (a^(b^(c^d))) % mod
    // Finally, we compute the result using the reduced exponent
    long long result = powermod(a, bpowcpowd, mod);

    // Output the final result
    cout << " (a^(b^(c^d))) % mod = " << result;

    return 0;  // Indicate that the program ended successfully
}
