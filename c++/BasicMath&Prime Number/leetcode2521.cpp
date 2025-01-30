// Input: nums = [2,4,3,7,10,6]
// Output: 4
// Explanation:
// The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 25 * 32 * 5 * 7.
// There are 4 distinct prime factors so we return 4.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to apply the Sieve of Eratosthenes algorithm to mark non-prime numbers
void fillsieve(vector<bool>& sieve)
{
    int n = sieve.size() - 1; // Get the maximum number to check for primality
    // Iterate over each number starting from 2 up to the square root of n
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (sieve[i]) // If the current number is still marked as prime
        {
            // Mark all multiples of the current number as non-prime
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = false; // Mark as non-prime
            }
        }
    }
}

// Function to find the number of distinct prime factors in the vector nums
int distinctPrime_factor(vector<int>& nums)
{
    int n = nums.size(); // Get the size of the input vector
    int mx = -1; // Variable to store the maximum value in nums

    // Find the maximum value in the vector nums
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, nums[i]); // Update mx with the maximum value found
    }

    // Create a sieve to find all primes up to the maximum value in nums
    vector<bool> sieve(mx + 1, true);
    fillsieve(sieve); // Apply the Sieve of Eratosthenes

    // Special cases: 0 and 1 are not prime numbers
    sieve[0] = false;
    sieve[1] = false;

    vector<int> primes; // Vector to store all prime numbers found
    // Store all primes found in the sieve
    for (int i = 2; i <= mx; i++)
    {
        if (sieve[i])
        {
            primes.push_back(i); // Add prime number to the primes vector
        }
    }

    vector<bool> taken(primes.size(), false); // Track which primes are factors
    // Iterate over each element in nums
    for (int i = 0; i < n; i++)
    {
        int ele = nums[i]; // Get the current element
        // Check which primes divide the current element
        for (int j = 0; j < primes.size(); j++)
        {
            if (primes[j] > ele) break; // Stop if the prime is greater than the element
            if (ele % primes[j] == 0)
            {
                taken[j] = true; // Mark this prime as a factor of ele
            }
        }
    }

    // Count the number of distinct primes found as factors
    int count = 0;
    for (int i = 0; i < taken.size(); i++)
    {
        if (taken[i])
        {
            count++; // Increment the count if the prime was a factor
        }
    }
    return count; // Return the total count of distinct prime factors
}

int main()
{
    vector<int> nums = {2, 4, 3, 7, 10, 6}; // Input vector of integers
    cout << distinctPrime_factor(nums); // Output the number of distinct prime factors
}

