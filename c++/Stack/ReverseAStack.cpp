#include <iostream>
#include <stack>
using namespace std;

// Function to print stack contents without changing the original order
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

int main()
{
    // Initialize a stack 'st' and add elements to it
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    // Print the initial size of the stack
    cout << "Original size of stack: " << st.size() << endl;

    // Print the original stack using the 'print' function
    cout << "Original stack contents: ";
    print(st);

    // Reverse the stack using two extra stacks 'dt' and 'gt'
    stack<int> dt;

    // Transfer elements from 'st' to 'dt' (this will reverse the order in 'dt')
    while (!st.empty())
    {
        dt.push(st.top()); // Push the top element of 'st' onto 'dt'
        st.pop();          // Remove the element from 'st'
    }

    // Newline for clear output separation
    cout << endl;

    // Transfer elements from 'dt' to 'gt' to reverse them back to the original order
    stack<int> gt;
    while (!dt.empty())
    {
        gt.push(dt.top()); // Push the top element of 'dt' onto 'gt'
        dt.pop();          // Remove the element from 'dt'
    }

    // Restore the elements from 'gt' back to 'st'
    while (!gt.empty())
    {
        st.push(gt.top()); // Push the top element of 'gt' back to 'st'
        gt.pop();          // Remove the element from 'gt'
    }

    // Print the reversed stack using the 'print' function
    cout << "Reversed stack contents: ";
    print(st);

    return 0;
}
