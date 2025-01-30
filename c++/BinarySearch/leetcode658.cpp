#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// Function to find k closest elements to x in the array arr
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    vector<int> ans(k);

    // If x is less than the first element, return the first k elements
    if (x < arr[0]) {
        for (int i = 0; i < k; i++) {
            ans[i] = arr[i];
        }
        return ans;
    }

    // If x is greater than the last element, return the last k elements using a while loop
    if (x > arr[n - 1]) {
        int i = n - 1;
        int j = k - 1;
        while (j >= 0) {
            ans[j] = arr[i];
            i--;
            j--;
        }
        return ans;
    }

    // Binary search to find the closest element to x
    int lo = 0, hi = n - 1;
    bool flag = false;
    int t = 0, mid;

    // Perform binary search to find the closest element
    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if (arr[mid] == x) {
            flag = true;
            ans[t] = arr[mid];
            t++;
            break;
        } else if (arr[mid] > x) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    int lb = hi;
    int ub = lo;
    if (flag) {
        lb = mid - 1;
        ub = mid + 1;
    }

    // Find the k closest elements
    while (t < k && lb >= 0 && ub <= n - 1) {
        int d1 = abs(x - arr[lb]);
        int d2 = abs(x - arr[ub]);
        if (d1 <= d2) {
            ans[t] = arr[lb];
            lb--;
        } else {
            ans[t] = arr[ub];
            ub++;
        }
        t++;
    }

    // If there are still elements to add, add from the left side
    while (t < k && lb >= 0) {
        ans[t] = arr[lb];
        lb--;
        t++;
    }

    // If there are still elements to add, add from the right side
    while (t < k && ub <= n - 1) {
        ans[t] = arr[ub];
        ub++;
        t++;
    }

    // Sort the result to get the elements in ascending order
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cin >> n; // Read the size of the array
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Read the elements of the array
    }
    int k, x;
    cin >> k >> x; // Read the number of closest elements to find and the target value
    vector<int> a = findClosestElements(v, k, x);
    for (int i = 0; i < k; i++) {
        cout << a[i] << " "; // Print the k closest elements
    }
    cout << endl;
    return 0;
}
