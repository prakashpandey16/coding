#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // Read the number of elements in the array and the number of queries
    //  Input: nums = [4,5,2,1], queries = [3,10,21]
    // Output: [2,3,4]


    vector<int> nums(n);  // Vector to store the array elements
    vector<int> queries(m);  // Vector to store the queries

    // Read the array elements
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Read the queries
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }

    vector<int> ans(m);  // Vector to store the results for each query

    // Sort the array elements
    sort(nums.begin(), nums.end());

    // Convert the array into prefix sums
    for (int i = 1; i < n; i++) {
        nums[i] += nums[i - 1];
    }

    // Process each query
    for (int i = 0; i < m; i++) {
        int maxlen = 0;  // Maximum length of subarray with sum <= queries[i]
        int lo = 0;  // Lower bound of binary search
        int hi = n - 1;  // Upper bound of binary search

        // Perform binary search to find the maximum length subarray with sum <= queries[i]
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;  // Calculate the middle index
            if (nums[mid] > queries[i]) {
                hi = mid - 1;  // Move to the left half if the prefix sum is greater than the query
            } else {
                // Update maxlen and move to the right half if the prefix sum is less than or equal to the query
                maxlen = mid + 1;
                lo = mid + 1;
            }
        }

        // Store the result for the current query
        ans[i] = maxlen;
    }

    // Output the results for all queries
    for (int i = 0; i < m; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
