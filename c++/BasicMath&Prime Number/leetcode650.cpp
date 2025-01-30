// 2 Keys Keyboard
// Input: n = 3
// Output: 3
// Explanation: Initially, we have one character 'A'.
// In step 1, we use Copy All operation.
// In step 2, we use Paste operation to get 'AA'.
// In step 3, we use Paste operation to get 'AAA'.


#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isprime(int n) {
    if (n == 1) return false; // 1 is not a prime number
    // Loop to check divisibility up to the square root of n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; // If n is divisible by any i, it's not prime
    }
    return true; // If no divisors are found, n is prime
}

// Function to find the greatest divisor (excluding n itself) of n
int gd(int n) {
    // Loop to find the smallest divisor greater than 1
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) return (n / i); // Return the corresponding divisor
    }
    return 1; // If no divisors are found, return 1 (which indicates n is prime)
}

// Function to calculate the minimum number of operations to reduce n to 1
int minimum_operation(int n) {
    int count = 0; // Initialize the operation count to 0
    // Loop until n is reduced to 1
    while (n > 1) {
        // If n is prime, add n to the count and break the loop
        if (isprime(n)) {
            count += n;
            break;
        }
        // Find the greatest divisor of n
        int hf = gd(n);
        // Add the quotient (n / hf) to the count
        count += (n / hf);
        // Update n to the greatest divisor
        n = hf;
    }
    return count; // Return the total number of operations
}

int main() {
    int n;
    cin >> n; // Read the input number
    cout << minimum_operation(n); // Output the result of minimum_operation
}
