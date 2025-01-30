#include<iostream>
#include<stack>
using namespace std;

// Function to print the stack in its original order
void print(stack<int> st)
{
    // Temporary stack to reverse the order for printing
    stack<int> temp;

    // Transfer all elements from 'st' to 'temp' to reverse the order
    while (!st.empty())
    {
        temp.push(st.top()); // Push the top element of 'st' to 'temp'
        st.pop();            // Remove the top element from 'st'
    }

    // Print the elements in 'temp' and restore them back to 'st'
    while (!temp.empty())
    {
        cout << temp.top() << " "; // Print the top element of 'temp'
        st.push(temp.top());       // Push it back to 'st' to restore original order
        temp.pop();                // Remove the element from 'temp'
    }
    cout << endl;
}

// Function to push a value at any given index in the stack
void pushAtAnyIndex(stack<int>& st, int val, int idx)
{
    // Temporary stack to hold elements before the insertion
    stack<int> gt;

    // Pop elements from 'st' until the desired index is reached
    while (st.size() > idx)
    {
        gt.push(st.top()); // Push the top element of 'st' to 'gt'
        st.pop();          // Remove the top element from 'st'
    }

    // Push the value at the given index
    st.push(val);

    // Push back the remaining elements from 'gt' to 'st'
    while (!gt.empty())
    {
        st.push(gt.top()); // Restore elements back to 'st'
        gt.pop();          // Remove the top element from 'gt'
    }
}

int main()
{
    // Initialize the stack and push elements onto it
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Print the stack before insertion
    cout << "Original stack contents: ";
    print(st);

    // Adding a value at index 3 in the stack (inserting 45 at the 4th position)
    pushAtAnyIndex(st, 45, 3);

    // Print the stack after insertion
    cout << "Stack contents after inserting 45 at index 3: ";
    print(st);

    return 0;
}
