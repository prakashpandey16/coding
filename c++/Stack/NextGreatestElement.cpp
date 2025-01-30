#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int arr[] = {3,1,2,7,4,6,2,3};  // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    for(int i = 0; i < n; i++)  // Loop to print the original array
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int nge[n]; // Array to store the Next Greater Element (NGE) for each element
    stack<int> st; // Stack to keep track of elements in reverse order

    // Initialize the last element's NGE as -1, since it has no elements to its right
    nge[n - 1] = -1;
    st.push(arr[n - 1]); // Push the last element to the stack

    // Traverse the array from the second last element to the first
    for(int i = n - 2; i >= 0; i--)
    {
        // Pop elements from the stack until we find a greater element or stack is empty
        while(st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }

        // Determine the NGE for the current element
        if(st.size() == 0) 
            nge[i] = -1; // No greater element found, so set NGE to -1
        else 
            nge[i] = st.top(); // The top element of stack is the NGE

        // Push the current element onto the stack for future comparisons
        st.push(arr[i]);
    }

    // Print the Next Greater Element array
    for(int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }

    return 0;
}
