// Input: nums = [10,5,2,6], k = 100
// Output: 8
#include <iostream>
using namespace std;

int main()
{
    // Initialize the array and calculate its size
    int arr[] = {10, 5, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize the sliding window pointers and other variables
    int i = 0, j = 0, product = 1, count = 0, k = 100;

    // Traverse the array with the sliding window
    while (j < n)
    {
        // Multiply the current element to the product
        product *= arr[j];

        // Adjust the window if the product exceeds or equals k
        while (product >= k && i <= j)
        {
            // Divide the product by the element at i and move the window's start
            product /= arr[i];
            i++;
        }

        // Count the number of valid subarrays ending at j
        count += (j - i + 1);

        // Move the window's end
        j++;
    }

    // Output the total count of subarrays
    cout << count;

    return 0;
}

