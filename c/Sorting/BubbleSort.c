#include<stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;  // Store the value of a in temp
    *a = *b;        // Assign the value of b to a
    *b = temp;      // Assign the value of temp (original a) to b
}

// Function to print the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Print each element of the array
    }
    printf("\n");  // Print a new line after the array
}

// Function to implement Bubble Sort
void BubbleSort(int arr[], int size) {
    // Outer loop for each pass
    for(int i = 0; i < size; i++) {
        // Inner loop for comparing adjacent elements
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {  // If current element is greater than the next
                swap(&arr[j], &arr[j+1]);  // Swap the elements using their addresses
            }
        }
    }
}

int main() {
    int arr[6] = {5, -4, 0, 3, 26, 1};  // Array to be sorted
    int n = 6;  // Size of the array

    // Print array before sorting
    printf("Print Array Before Sorting :-> ");
    printArray(arr, n);

    // Call BubbleSort function
    BubbleSort(arr, n);

    // Print array after sorting
    printf("Print Array After Sorting :-> ");
    printArray(arr, n);

    return 0;
}
