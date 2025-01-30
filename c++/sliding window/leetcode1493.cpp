// Input: nums = [1,1,0,1]
// Output: 3
#include<iostream>
#include<climits>
using namespace std;

int main() {
    // Array of integers where 1 represents a 'good' element and 0 represents a 'bad' element.
    int nums[] = {1, 1, 0, 1};

    // Calculate the size of the array.
    int n = sizeof(nums) / sizeof(nums[0]);

    // flips: Counts the number of zeros in the current window.
    // i: Start index of the current window.
    // j: End index of the current window.
    int flips = 0, i = 0, j = 0;

    // maxlen: Stores the maximum length of the window found so far.
    int maxlen = 0;

    // Iterate through the array using the sliding window technique.
    while (j < n) {
        // If the current element is 'bad' (0), increase the flips count.
        if (nums[j] == 0) {
            flips++;
        }

        // If flips count exceeds 1, shrink the window from the left.
        while (flips > 1) {
            if (nums[i] == 0) {
                flips--; // Reduce flips as we're removing a zero from the window.
            }
            i++; // Move the start of the window to the right.
        }

        // Calculate the current window length and update maxlen.
        maxlen = max(maxlen, j - i);
        j++; // Expand the window from the right.
    }

    // Since the problem requires deleting exactly one element,
    // if the entire array is 1's, the result should be maxlen.
    cout << maxlen << endl;
}
