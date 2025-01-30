//  arr[] = {12,2,3,1,6,1,6,18,6,3,8,13,13,13,8}


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Function to find the length of the longest subarray consisting of the maximum element
int longest_subarray(vector<int> &arr) 
{
    int n = arr.size();  // Get the size of the array
    int max_ele = *max_element(arr.begin(), arr.end());  // Find the maximum element in the array
    int subarraylength = 0, ans = 1;  // Initialize subarray length counter and the result (answer)

    // Loop through the array to find the longest subarray with the maximum element
    for(int i = 0; i < n; i++) 
    {
        // If the current element is the maximum element, increase the subarray length
        if(arr[i] == max_ele) 
        {
            subarraylength++;
            // Update the answer if the current subarray length is greater than the previous maximum
            ans = max(subarraylength, ans);
        }
        else 
        {
            // If the current element is not the maximum, reset the subarray length counter
            subarraylength = 0;
        }
    }
    
    return ans;  // Return the length of the longest subarray with the maximum element
}

int main()
{
    int n;
    // Input the size of the array
    cin >> n;
    
    vector<int> arr(n);  // Initialize a vector of size n to store the array elements
    
    // Input the elements of the array
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    // Output the length of the longest subarray with the maximum element
    cout << longest_subarray(arr);

    return 0;
}
