#include<iostream>
using namespace std;

// Function using a built-in function to count the number of set bits (1s) in an integer
int count_set_Bit(int n)
{
    return __builtin_popcount(n); // __builtin_popcount is a GCC built-in function that returns the number of set bits
}

// Function using Brian Kernighan's algorithm to count the number of set bits (1s) in an integer
int count_set_bit(int n)
{
    int count = 0;
    while(n > 0)
    {
        n = (n & (n-1)); // This operation reduces the number of set bits by 1 in each iteration
        count++;
    }
    return count;
}

int main()
{
    cout << count_set_Bit(13) << endl; // Output the number of set bits in 13 using the built-in function
    cout << count_set_bit(13); // Output the number of set bits in 13 using Brian Kernighan's algorithm
}
