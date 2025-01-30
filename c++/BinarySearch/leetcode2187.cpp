#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Function to check if it is possible to complete the required trips in the given time 'mid'
bool check(long long mid, vector<int>& time, int totalTrips) {
    int n = time.size();
    long long trips = 0;
    for (int i = 0; i < n; i++) {
        trips += mid / (long long)time[i];
    }
    if(trips<(long long) totalTrips) return false;
    else return true;
}

// Function to find the minimum time required to complete 'totalTrips' trips
long long minimumTime(vector<int>& time, int totalTrips) {
    int n = time.size();
    int maxTime = -1; // Find the maximum time in the array
    for(int i=0;i<n;i++)
    {
        maxTime = max(maxTime,time[i]);
    }
    long long lo = 1;
    long long hi = (long long)maxTime * (long long)totalTrips;
    long long ans = -1;

    // Binary search to find the minimum time;
    while (lo<= hi) 
     {
        long long mid = lo + (hi - lo) / 2;
        if (check(mid, time, totalTrips)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n; // Input number of elements in the array
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Input the time for each vehicle
    }
    int trips;
    cin >> trips; // Input the total number of trips required
    cout << minimumTime(v, trips); // Output the minimum time to complete the trips
    return 0;
}
