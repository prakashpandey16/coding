#include<iostream>
#include<cmath>
using namespace std;

// This function takes O(n) time complexity to check if a number is prime.
bool is_prime(int n)
{
    // 1 is not a prime number.
    if(n==1) return false;
    
    // Check divisibility from 2 to n-1.
    for(int i=2;i<=n;i++)
    {
        // If n is divisible by any number between 2 and n-1, it is not prime.
        if(n%i==0) return false;
    }
    
    // If no divisors were found, n is prime.
    return true;
}

// Optimized version which takes O(sqrt(n)) time complexity to check if a number is prime.
bool Is_prime(int n)
{
    // 1 is not a prime number.
    if(n==1) return false;
    
    // Check divisibility from 2 to the square root of n.
    for(int i=2;i<=sqrt(n);i++)
    {
        // If n is divisible by any number between 2 and sqrt(n), it is not prime.
        if(n%i==0) return false;
    }
    
    // If no divisors were found, n is prime.
    return true;
}

int main()
{
    int n;
    // Input a number from the user.
    cin>>n;
    
    // Output the result of the O(n) prime check function.
    cout<<is_prime(n)<<endl;
    
    // Output the result of the optimized O(sqrt(n)) prime check function.
    cout<<Is_prime(n);
}
