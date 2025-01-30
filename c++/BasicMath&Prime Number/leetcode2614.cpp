// Input: nums = [[1,2,3],[5,6,7],[9,10,11]]
// Output: 11

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Function to check if a number is prime with O(sqrt(n)) time complexity.
bool Is_prime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

// Function to find the maximum prime number on the diagonals of a matrix.
int diagonalPrime(vector<vector<int>>& nums)
{
    int n = nums.size(); // Get the size of the matrix (assumed to be square).
    int mx = 0; // Variable to store the maximum prime number found.

    // Loop through the matrix diagonals.
    for(int i=0;i<n;i++)
    {
        // Check the primary diagonal element for primality.
        if(Is_prime(nums[i][i]))
        {
            mx = max(mx, nums[i][i]); // Update mx if a larger prime is found.
        }
        
        // Check the secondary diagonal element for primality.
        if(Is_prime(nums[i][n-i-1]))
        {
            mx = max(mx, nums[i][n-i-1]); // Update mx if a larger prime is found.
        }
    }
    return mx; // Return the maximum prime number found on the diagonals.
}

int main()
{
   // Initialize a 3x3 matrix.
   vector<vector<int>> nums = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};
   
   // Output the largest prime number on the diagonals of the matrix.
   cout << diagonalPrime(nums);

}
