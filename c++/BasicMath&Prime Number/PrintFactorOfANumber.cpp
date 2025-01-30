#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;  // Input the number 'n'

    // First loop: Iterate from 1 to the square root of 'n'
    for(int i = 1; i < sqrt(n); i++)
    {
       // If 'i' is a divisor of 'n', print 'i'
       if(n % i == 0) cout << i << " ";
    }

    // Second loop: Iterate from the square root of 'n' down to 1
    for(int i = sqrt(n); i >= 1; i--)
    {
        // If 'i' is a divisor of 'n', print the corresponding divisor 'n/i'
        if(n % i == 0) cout << n/i << " ";
    }
}
