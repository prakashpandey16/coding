#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate (base^exp) % mod using modular exponentiation
// This function computes the result iteratively to handle large exponents efficiently.
long long powerMod(long long base, long long exp, long long mod) {
    long long result = 1;  // Initialize the result to 1 (as anything raised to power 0 is 1)
    base = base % mod;     // Take base modulo mod to keep the base within mod range and avoid overflow
    
    // Loop until the exponent becomes 0
    while (exp > 0) {
        // If the exponent is odd, multiply the current base with result
        if (exp % 2 == 1)
            result = (result * base) % mod;  // Update result and take modulo to keep it within range
        
        // Halve the exponent (integer division by 2)
        exp = exp >> 1;       // This is equivalent to exp = exp / 2
        
        // Square the base and take modulo to keep it within the mod range
        base = (base * base) % mod;
    }
    return result;  // Return the final computed result
}

int main() {
    long long a, b, c;
    const long long MOD = 1e9 + 7;  // Define a large prime number as the modulus (common in competitive programming)

    // Prompt the user to enter values for a, b, and c
    cout << "Enter values for a, b, c: ";
    cin >> a >> b >> c;  // Read the input values
    
    // Compute b^c % (MOD-1) to avoid overflow using modular exponentiation
    // This reduces the size of the exponent by taking advantage of Fermat's Little Theorem
    long long exp = powerMod(b, c, MOD-1);

    // Compute a^(b^c) % MOD using the reduced exponent from the previous step
    long long result = powerMod(a, exp, MOD);

    // Output the final result to the console
    cout << "a^(b^c) % MOD = " << result << endl;

    return 0;  // Indicate that the program ended successfully
}
