#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Define the arrays and parameters
    int customers[] = {1,0,1,2,1,1,7,5};
    int grumpy[] = {0,1,0,1,0,1,0,1};
    int minutes = 3;
    int n = sizeof(customers)/sizeof(customers[0]); // Number of customers

    // Convert arrays to vectors for easier manipulation
    vector<int> arr(n,0);  // Vector to store customers' satisfaction
    for(int i = 0; i < n; i++)
    {
        arr[i] = customers[i];  // Copy customer values to the vector
    }

    int k = minutes;  // Length of the time window
    int prevloss = 0;

    // Calculate the initial loss in satisfaction for the first 'k' minutes
    for (int i = 0; i < k; i++) {
        if (grumpy[i] == 1)
            prevloss += arr[i];  // Add satisfaction loss where owner is grumpy
    }

    int maxloss = prevloss;  // Initialize maxloss with the initial loss
    int maxidx = 0;  // Initialize the starting index of the optimal window
    int i = 1;  // Start of the sliding window
    int j = k;  // End of the sliding window

    // Sliding window to find the maximum loss that can be mitigated
    while (j < n) {
        int currloss = prevloss;
        if (grumpy[j] == 1)
            currloss += arr[j];  // Add current end of window if owner is grumpy
        if (grumpy[i - 1] == 1)
            currloss -= arr[i - 1];  // Subtract previous start of window if owner was grumpy

        if (maxloss < currloss) {
            maxloss = currloss;
            maxidx = i;  // Update index of the optimal window
        }

        prevloss = currloss;  // Update prevloss for the next iteration
        i++;
        j++;
    }

    // Filling 0s in grumpy array from maxidx to maxidx+k
    for (int i = maxidx; i < maxidx + k && i < n; i++) {
        grumpy[i] = 0;  // Set grumpy values to 0 in the optimal window
    }

    // Calculate the sum of satisfaction
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (grumpy[i] == 0)
            sum += arr[i];  // Add satisfaction where owner is not grumpy
    }

    cout << sum;  // Output the total satisfaction
}

