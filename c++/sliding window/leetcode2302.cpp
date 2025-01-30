#include<iostream>
using namespace std;

// Function to count the number of subarrays where the sum of elements multiplied by the length of the subarray is less than a given threshold k
int count_subsequence(int *arr, int n, int k) {
    int i = 0, j = 0; // Initialize two pointers for the sliding window
    int count = 0;    // This will store the total count of valid subarrays
    int sum = 0;      // This will store the sum of elements in the current window

    // Traverse the array using the 'j' pointer
    while (j < n) {
        sum += arr[j]; // Add the current element to the sum

        // Check if the current window is invalid (sum * length of the window >= k)
        // and move the 'i' pointer to make it valid again
        while (sum * (j - i + 1) >= k && i <= j) {
            sum -= arr[i]; // Remove the element at 'i' from the sum
            i++;           // Move the 'i' pointer to the right
        }

        // All subarrays ending at 'j' and starting from any index 'x' where i <= x <= j
        // will have a sum * length of the window less than k.
        count += (j - i + 1); // Add the count of valid subarrays to the total count

        j++; // Move the 'j' pointer to the right to consider the next element
    }
    return count; // Return the total count of valid subarrays
}

int main() {
    int arr[] = {1, 1, 1};  // Example array
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array
    int k = 5; // Threshold value
    cout << count_subsequence(arr, n, k); // Call the function and print the result
}


