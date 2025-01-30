// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    // Initialize the array and find its size
    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Set the target sum
    int target = 7;

    // Initialize pointers for the sliding window
    int i = 0; // Start of the window
    int j = 0; // End of the window

    // Initialize variables for the minimum length and the current sum
    int minlen = INT_MAX; // Initialize with a large value
    int len = 0;          // Current length of the window
    int sum = 0;          // Current sum of the window

    // Traverse through the array
    while(j < n)
    {
        // Add the current element to the sum
        sum += arr[j];

        // If the sum is greater than or equal to the target, try to minimize the window size
        while(sum >= target)
        {
            // Calculate the current window length
            len = j - i + 1;

            // Update the minimum length if the current one is smaller
            minlen = min(len, minlen);

            // Subtract the element at the start of the window and move the start pointer
            sum -= arr[i];
            i++;
        }

        // Move the end pointer to expand the window
        j++;
    }

    // If the minimum length wasn't updated, it means no valid subarray was found
    if(minlen == INT_MAX) 
        cout << 0;
    else 
        cout << minlen; // Output the minimum length of the subarray
}
