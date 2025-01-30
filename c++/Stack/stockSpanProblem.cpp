#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print the original array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pgi[n]; // Array to store the number of days since the last greater element (previous greater index difference)
    stack<int> st; // Stack to store indices of elements for efficient comparison

    // Initialize the first element's PGi as 1 (1 day before), since there are no previous elements to compare with
    pgi[0] = 1;
    st.push(0); // Push the index of the first element onto the stack

    // Traverse the array from the second element to the last
    for(int i = 1; i < n; i++)
    {
        // Pop indices from the stack while the elements at those indices are less than or equal to arr[i]
        while(st.size() > 0 && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        // Determine the previous greater index difference for the current element
        if(st.size() == 0) 
            pgi[i] = i + 1; // If no greater element found, set PGi to the current index + 1 (since it’s days from the beginning)
        else 
            pgi[i] = i - st.top(); // Calculate the difference in indices

        // Push the current index onto the stack for future comparisons
        st.push(i);
    }

    // Print the Previous Greater Index array
    for(int i = 0; i < n; i++)
    {
        cout << pgi[i] << " ";
    }

    return 0;
}
