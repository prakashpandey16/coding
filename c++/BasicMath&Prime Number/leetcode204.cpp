// Given an integer n, return the number of prime numbers that are strictly less than n.

//  Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// concept of eratosthensis 

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to apply the Sieve of Eratosthenes algorithm
void fillsieve(vector<bool> &sieve)
{
    int n = sieve.size() - 1; // The maximum number to check for primality
    // Iterate over each number starting from 2 up to the square root of n
    for (int i = 2; i <= sqrt(n); i++)
    {
        // If the current number is marked as prime
        if (sieve[i])
        {
            // Mark all multiples of the current number as non-prime
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = false; // Mark as non-prime
            }
        }
    }
}

int main()
{
    int n;
    cin >> n; // Input the maximum number to find primes up to

    // Special case: if n is less than or equal to 2, there are no primes less than n
    if (n <= 2)
    {
        cout << 0; // Output 0 as there are no primes
        return 0; // Exit the program
    }

    // Create a sieve vector initialized to true (assuming all numbers are prime)
    vector<bool> sieve(n + 1, true);

    // Apply the Sieve of Eratosthenes to mark non-prime numbers
    fillsieve(sieve);

    // 0 and 1 are not prime numbers, so mark them as false
    sieve[0] = false;
    sieve[1] = false;

    int count = 0; // Initialize a counter for prime numbers
    // Iterate through the sieve to count the number of primes
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i]) // If the number is prime
        {
            count++; // Increment the prime count
        }
    }
    // Output the total number of primes found
    cout << count;

    return 0; // Exit the program
}
