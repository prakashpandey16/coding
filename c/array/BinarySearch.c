#include<stdio.h>
#include<stdbool.h>

// Function to perform Binary Search
void BinarySearch(int arr[], int size, int target) {
    int low = 0;               // Start index of the array
    int high = size - 1;       // End index of the array
    bool find = false;         // Boolean flag to track if target is found
    int index = -1;            // Store the index of the target if found

    // While loop to perform Binary Search
    while (low <= high) {
        // Calculate the middle index to avoid overflow
        int mid = low + (high - low) / 2;

        // Check if the middle element is the target
        if (arr[mid] == target) {
            find = true;      // Mark that the target is found
            index = mid;      // Store the index of the target
            break;            // Exit the loop since the target is found
        }
        // If the target is greater than mid, search in the right half
        else if (arr[mid] < target) {
            low = mid + 1;   // Move the lower bound up
        } 
        // If the target is smaller than mid, search in the left half
        else {
            high = mid - 1;  // Move the upper bound down
        }
    }

    // Print the result after the loop
    if (find) {
        printf("Target found at index: %d\n", index);  // If found, print the index
    } else {
        printf("Element is not found\n");  // If not found, print a message
    }
}

int main() {
    // Sorted array for Binary Search
    int arr[7] = {10, 20, 30, 40, 50, 60, 80};
    int size = 7;  // Size of the array
    int x;          // Variable to store user input for search

    // Prompt user to input a value to search for
    printf("Enter element that you want to search in array: ");
    scanf("%d", &x);  // Take user input for the target element

    // Call BinarySearch function to search the target in the array
    BinarySearch(arr, size, x);

    return 0;
}
