#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;  // Read the length of the string
    string s;
    cin >> s;  // Read the string
    
    // Arrays to store prefix and suffix penalties
    int prefix[n + 1];  // Penalty for 'N'
    int suffix[n + 1];  // Penalty for 'Y'
    
    prefix[0] = 0;  // Initialize the penalty for 'N' at the start
    // Calculate prefix penalties for 'N'
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + ((s[i] == 'N') ? 1 : 0);
    }
    
    suffix[n] = 0;  // Initialize the penalty for 'Y' at the end
    // Calculate suffix penalties for 'Y'
    for (int i = n - 1; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + ((s[i] == 'Y') ? 1 : 0);
    }
    
    int minPenalty = INT_MAX;  // Initialize minimum penalty to a large value
    
    // Calculate the minimum penalty by summing prefix and suffix penalties
    for (int i = 0; i <= n; i++) {
        prefix[i] += suffix[i];
        int pen = prefix[i];
        minPenalty = min(pen, minPenalty);  // Update the minimum penalty
    }
    
    // Find the index that results in the minimum penalty
    for (int i = 0; i <= n; i++) {
        int pen = prefix[i];
        if (pen == minPenalty) {
            cout << i;  // Output the index where the minimum penalty occurs
            break;
        }
    }
    
    return 0;
}
