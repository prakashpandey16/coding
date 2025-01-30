// Input: n = 6
// Output: true
// Explanation: 6 = 2 × 3
// Example 2:

// Input: n = 1
// Output: true

#include<iostream>
#include<cmath>
using namespace std;

// Function to check if a number 'n' is an ugly number
bool isUgly(int n) 
{
    // If 'n' is 0, it's not an ugly number
    if (n == 0) return false;

    // Divide 'n' by 2 as long as it's divisible by 2
    while (n % 2 == 0)  n /= 2;

    // Divide 'n' by 3 as long as it's divisible by 3
    while (n % 3 == 0) n /= 3;

    // Divide 'n' by 5 as long as it's divisible by 5
    while (n % 5 == 0) n /= 5;

    // If the remaining number is 1, then 'n' is an ugly number
    return (n == 1);
}

int main()
{
    int n;
    cin >> n;  // Input the number 'n'
    
    // Output 1 (true) if 'n' is an ugly number, otherwise 0 (false)
    cout << isUgly(n);
}
