// Input: nums = [1,7,3,6,5,6]
// Output: 3

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize the input array
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Compute the number of elements in the array
    
    // Create a prefix sum array to store cumulative sums
    vector<int> prefix(n, 0); // Initialize with zeros

    // Fill the prefix sum array
    prefix[0] = arr[0]; // The first element of prefix is the same as the first element of arr
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i]; // Compute cumulative sum
    }

    int pivotidx = -1; // Initialize pivot index as -1 (default value indicating no pivot found)

    // Iterate through the array to find the pivot index
    for (int i = 0; i < n; ++i) {
        // Calculate the sum of elements to the left of index i
        int leftsum = (i == 0) ? 0 : prefix[i - 1];
        
        // Calculate the sum of elements to the right of index i
        int rightsum = prefix[n - 1] - prefix[i];
        
        // Check if the left sum is equal to the right sum
        if (leftsum == rightsum) {
            pivotidx = i; // Update pivot index
            break; // Exit loop as we have found a valid pivot index
        }
    }

    // Output the pivot index (or -1 if no pivot index was found)
    cout << pivotidx;

    return 0;
}
