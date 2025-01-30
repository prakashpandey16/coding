#include<iostream>
using namespace std;

int main() {
    // Initializing an array with positive and negative integers
    int arr[] = {2, -3, 4, 5, -7, -1, 4, -2, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculating the size of the array

    // Printing the array elements
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int k = 4; // Size of the sliding window
    int p = -1; // Variable to store the position of the first negative number in the window
    int ans[n - k + 1]; // Array to store the result

    // Finding the first negative number in the first window of size k
    for(int i = 0; i < k; i++) {
        if(arr[i] < 0) {
            p = i; // Storing the index of the first negative number
            break;
        }
    }

    // If no negative number is found, set ans[0] to 1
    if(p == -1) ans[0] = 1;
    else ans[0] = arr[p]; // Otherwise, store the first negative number

    // Sliding window
    int i = 1;
    int j = k;
    while(j < n) {
        if(p >= i) 
            ans[i] = arr[p]; // Use the previous negative number if it's still within the window
        else {
            p = -1;
            // Find the first negative number in the current window
            for(int x = i; x <= j; x++) {
                if(arr[x] < 0) {
                    p = x;
                    break;
                }
            }
            // If a negative number is found, store it, otherwise store 1
            if(p != -1) ans[i] = arr[p];
            else ans[i] = 1;
        }
        i++;
        j++;
    }

    // Print the result array
    for(int i = 0; i < n - k + 1; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
