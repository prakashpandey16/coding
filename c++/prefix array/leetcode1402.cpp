#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //Input: satisfaction = [-1,-8,0,5,-9]
     //Output: 14


    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());

    // Create a suffix sum array
    int suffix[n];
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    // Find the index where suffix sum becomes non-negative
    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (suffix[i] >= 0) {
            idx = i;
            break;
        }
    }

    // If no such index, the result is 0
    if (idx == -1) {
        cout << 0;
        return 0;
    }

    // Calculate the maximum sum
    int x = 1;
    int maxsum = 0;
    for (int i = idx; i < n; i++) {
        maxsum += arr[i] * x;
        x++;
    }

    cout << maxsum;
    return 0;
}
