#include<iostream>
#include<climits>
using namespace std;

int main() {
    // Initialize an array of integers.
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    
    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Set the window size.
    int k = 3;
    
    // Initialize variables to store the maximum sum, the starting index of the maximum sum window, and the sum of the previous window.
    int maxsum = INT_MIN;
    int maxidx = -1;
    int prevsum = 0;
    
    // Calculate the sum of the first window of size 'k'.
    for(int i = 0; i < k; i++) {
        prevsum += arr[i];
    }
    
    // Set the maximum sum to the sum of the first window.
    maxsum = prevsum;
    
    // Initialize the starting and ending indices for the sliding window.
    int i = 1;
    int j = k;
    
    // Sliding window to find the maximum sum of a subarray of size 'k'.
    while(j < n) {
        // Calculate the current window sum by sliding the window one element forward.
        int currsum = prevsum + arr[j] - arr[i - 1];
        
        // If the current window sum is greater than the maximum sum found so far, update the maximum sum and the starting index.
        if(maxsum < currsum) {
            maxsum = currsum;
            maxidx = i;
        }
        
        // Update the previous window sum to the current window sum.
        prevsum = currsum;
        
        // Move the window forward by incrementing both indices.
        i++;
        j++;
    }
    
    // Print the maximum sum and the starting index of the maximum sum window.
    cout << maxsum << endl;
    cout << maxidx;
}
