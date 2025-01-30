#include<stdio.h>

// Function to partition the array and return the pivot index
int partitions(int arr[], int low, int high) {
    int pivot = arr[high]; // Select the last element as the pivot
    int i = low - 1;       // Index to track the position of smaller elements

    for (int j = low; j < high; j++) { // Traverse the array from low to high-1
        if (arr[j] < pivot) { // If the current element is smaller than the pivot
            i++;              // Increment the smaller element index
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++; // Increment index to place the pivot in its correct position
    // Swap the pivot with the element at index i
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;

    return i; // Return the index of the pivot
}

// Recursive function to sort the array using QuickSort
void Quicksort(int arr[], int low, int high) {
    if (low < high) { // Base condition: stop when low is not less than high
        // Partition the array and get the pivot index
        int pidx = partitions(arr, low, high);
        // Recursively sort the elements before and after the pivot
        Quicksort(arr, low, pidx - 1);
        Quicksort(arr, pidx + 1, high);
    }
}

// Function to print the elements of the array
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) { // Loop through the array
        printf("%d ", arr[i]);       // Print each element
    }
    printf("\n"); // Print a newline at the end
}

int main() {
    int arr[] = {10, 5, 3, 2, 32, 13}; // Initialize an array
    int n = 6; // Size of the array
    printf("Array before Sorting: ");
    PrintArray(arr, n); // Print the original array
    Quicksort(arr, 0, n - 1); // Sort the array using QuickSort
    printf("Array After Sorting: ");
    PrintArray(arr, n); // Print the sorted array
    return 0; // Exit the program
}
