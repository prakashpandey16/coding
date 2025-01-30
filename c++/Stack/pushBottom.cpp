#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Initialize the main stack and push elements onto it
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Display original stack contents before adding a value to the bottom
    cout << "Original stack contents: ";
    stack<int> helper;
    while (!st.empty())
    {
        cout << st.top() << " "; // Print top element
        helper.push(st.top());   // Transfer element from 'st' to 'helper'
        st.pop();
    }
    cout << endl;

    // Push the new value (80) onto the now-empty main stack (adds to the bottom)
    st.push(80);

    // Transfer elements back from 'helper' to 'st', restoring the original order
    while (!helper.empty())
    {
        st.push(helper.top());
        helper.pop();
    }

    // Display the stack after adding the new bottom value
    cout << "Stack contents after adding 80 at the bottom: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}



