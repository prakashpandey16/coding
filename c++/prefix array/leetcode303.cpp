//Range Sum Query - Immutable
// Input
// ["NumArray", "sumRange", "sumRange", "sumRange"]
// [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
// Output
// [null, 1, -1, -3]

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize the input array
    int arr[] = {-2, 0, 3, -5, 2, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Create a prefix sum array with one extra element
    vector<int> prefix(n + 1, 0);

    // Fill the prefix sum array
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    // Number of queries
    int q;
    cin >> q;

    // Process each query
    while (q--) {
        int left, right;
        cin >> left >> right;
        cout << prefix[right + 1] - prefix[left] << endl;
    }

    return 0;
}

