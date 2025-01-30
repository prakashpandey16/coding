#include<iostream>
#include<vector>
using namespace std;

// Function to search target in a rotated sorted array
int search(vector<int>& arr, int target) {
    int n = arr.size();
    if(n == 0) return -1;
    
    // Step 1: Find the pivot point where rotation happens
    int lo = 0;
    int hi = n - 1;
    while(lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] > arr[hi]) lo = mid + 1;
        else hi = mid;
    }
    int pivot = lo;

    // Step 2: Determine which part of the array to perform binary search
    lo = 0;
    hi = n - 1;
    if(target >= arr[pivot] && target <= arr[n - 1]) {
        lo = pivot;
    } else {
        hi = pivot - 1;
    }

    // Step 3: Perform binary search in the determined subarray
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) hi = mid - 1;
        else lo = mid + 1;
    }
    return -1; // Target not found
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int target;
    cin >> target;
    cout << search(v, target);
}

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
// Example 3:

// Input: nums = [1], target = 0
// Output: -1
