#include<iostream>
using namespace std;

int count_subarrays_with_average_greater_than_threshold(int arr[], int n, int k, int threshold) {
    int sum = 0;

    // Calculate the sum of the first window of size k
    for(int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int count = 0;
    int target = threshold * k; // threshold * k is our comparison value

    // Check if the sum of the first window meets the target
    if(sum >= target) {
        count++;
    }

    // Slide the window across the array
    for(int j = k; j < n; j++) {
        // Update the sum to include the next element and exclude the first element of the previous window
        sum += arr[j] - arr[j - k];

        // Check if the new window's sum meets the target
        if(sum >= target) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {2, 2, 2, 2, 5, 5, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int threshold = 4;

    // Output the count of subarrays where the average is greater than or equal to the threshold
    cout << count_subarrays_with_average_greater_than_threshold(arr, n, k, threshold);

    return 0;
}
