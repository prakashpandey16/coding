#include<iostream>
using namespace std;

void Unique_element(int *arr, int n)
{
    int res = 0;
    // XOR all elements in the array. This will leave us with the XOR of the two unique elements
    // since all other elements will cancel out.
    for(int i = 0; i < n; i++) 
        res = res ^ arr[i];

    int temp = res; // Copy the result to a temporary variable to find the rightmost set bit.
    
    int k = 0; 
    // Find the position of the rightmost set bit in `temp`.
    while(true)
    {
        if((temp & 1) == 1)  // Check if the least significant bit is set (i.e., equals 1).
        {
            break;  // If it is, stop the loop.
        }
        k++;  // Increment the bit position.
        temp = temp >> 1;  // Right shift `temp` to check the next bit.
    }

    int value = 0;
    // XOR the numbers which have the k-th bit set. This will give one of the unique elements.
    for(int i = 0; i < n; i++)
    {
        int num = arr[i];
        if(((num >> k) & 1) == 1)  // Check if the k-th bit is set in the current number.
        {
            value ^= num;  // XOR this number to isolate one unique element.
        }
    }

    cout << value << " ";  // Print the first unique element.

    res = value ^ res;  // XOR the found unique element with the previous XOR result to get the other unique element.

    cout << res << " ";  // Print the second unique element.
}

int main()
{
    int arr[] = {1, 2, 1, 3, 2, 5};  // Example array with two unique elements (3 and 5).
    int n = sizeof(arr)/sizeof(arr[0]);  // Calculate the number of elements in the array.
    Unique_element(arr, n);  // Call the function to find and print the unique elements.
}
