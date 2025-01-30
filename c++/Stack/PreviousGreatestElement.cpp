#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int arr[] = {2, 1, 2, 5, 6, 2, 4, 8}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print the original array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pge[n]; // Array to store the Previous Greater Element (PGE) for each element
    stack<int> st; // Stack to keep track of elements in sequence

    // Initialize the first element's PGE as -1, since it has no elements to its left
    pge[0] = -1;
    st.push(arr[0]); // Push the first element to the stack

    // Traverse the array from the second element to the last
    for(int i = 1; i < n; i++)
    {
        // Pop elements from the stack until we find a greater element or stack is empty
        while(st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }

        // Determine the PGE for the current element
        if(st.size() == 0) 
            pge[i] = -1; // No greater element found to the left, so set PGE to -1
        else 
            pge[i] = st.top(); // The top element of stack is the PGE

        // Push the current element onto the stack for future comparisons
        st.push(arr[i]);
    }

    // Print the Previous Greater Element array
    for(int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }

    return 0;
}
