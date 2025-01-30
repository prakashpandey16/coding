#include <stdio.h>

// Function to merge two sorted subarrays
void conquer(int arr[], int si, int mid, int ei) {
    int size = (ei - si + 1);  // Size of the merged array
    int merged[size];           // Temporary array to store merged values
    int i = si;                 // Pointer for the left subarray
    int j = mid + 1;            // Pointer for the right subarray
    int x = 0;                  // Pointer for the merged array

    // Merging two sorted subarrays
    while (i <= mid && j <= ei) {
        if (arr[i] < arr[j]) {
            merged[x++] = arr[i++];  // Take element from the left subarray
        } else {
            merged[x++] = arr[j++];  // Take element from the right subarray
        }
    }

    // Copy remaining elements from the left subarray, if any
    while (i <= mid) {
        merged[x++] = arr[i++];
    }

    // Copy remaining elements from the right subarray, if any
    while (j <= ei) {
        merged[x++] = arr[j++];
    }

    // Copy merged array back to the original array
    for (int i = 0; i < size; i++) {
        arr[si + i] = merged[i];
    }
}

// Function to recursively divide the array into two halves
void divide(int arr[], int si, int ei) {
    if (si >= ei) {
        return;  // Base case: single element or no element to sort
    }

    int mid = si + (ei - si) / 2;  // Calculate the middle index
    divide(arr, si, mid);           // Recursively divide the first half
    divide(arr, mid + 1, ei);       // Recursively divide the second half
    conquer(arr, si, mid, ei);      // Merge the two halves
}

// Function to print an array
void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[8] = {23, 21, 9, 2, 4, 20, 23, 1};
    int n = 8;

    printf("Array before sorting: ");
    PrintArray(arr, n);  // Print the original array

    divide(arr, 0, n - 1);  // Call the divide function to sort the array

    printf("Array after sorting: ");
    PrintArray(arr, n);  // Print the sorted array

    return 0;
}

