// Input: n = 15
// Output: 5

#include<iostream>
#include<cmath>
using namespace std;

// Function to check if a number 'n' is prime
bool Is_prime(int n)
{
    if(n == 1) return false;  // 1 is not a prime number
    // Check for factors from 2 to sqrt(n)
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;  // If 'n' is divisible by 'i', it's not prime
    }
    return true;  // 'n' is prime if no divisors were found
}

// Function to find the smallest value by summing prime factors
int smallestvalue(int n)
{
    int sum = 0;  // Initialize sum to store the sum of prime factors

    // If 'n' is prime, return 'n' as the smallest value
    if(Is_prime(n)) return n;

    // First loop: Iterate from 1 to the square root of 'n'
    for(int i = 1; i < sqrt(n); i++)
    {
        // If 'i' is a divisor of 'n' and is prime
        if(n % i == 0 && Is_prime(i))
        {
          int m = n;
          // While 'm' is divisible by 'i', add 'i' to the sum
          while(m % i == 0)
          {
            sum += i;
            m /= i;  // Reduce 'm' by dividing it by 'i'
          }
        }
    }

    // Second loop: Iterate from the square root of 'n' down to 1
    for(int i = sqrt(n); i >= 1; i--)
    {
        // If 'n/i' is a divisor of 'n' and is prime
        if(n % i == 0 && Is_prime(n / i))
        {
            int m = n;
            // While 'm' is divisible by 'n/i', add 'n/i' to the sum
            while(m % (n / i) == 0)
            {
                sum += (n / i);
                m /= (n / i);  // Reduce 'm' by dividing it by 'n/i'
            }
        }
    }

    // If the sum of prime factors equals 'n', return 'n'
    if(sum == n) return n;

    // Recursively call smallestvalue() with the sum until a prime value is found
    return smallestvalue(sum);
}

int main()
{
    int n;
    cin >> n;  // Input the number 'n'
    cout << smallestvalue(n);  // Output the smallest value
}

