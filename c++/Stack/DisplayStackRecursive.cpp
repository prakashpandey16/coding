#include <iostream>
#include <stack>
using namespace std;

// Function to display the elements of the stack using recursion
// without modifying the original stack order.
void display(stack<int>& st)
{
    // Base case: if the stack is empty, return.
    if (st.size() == 0) return;
    
    // Pop the top element and store it
    int x = st.top();
    st.pop();
    
    // Recursive call to display the remaining elements
    display(st);
    
    // Print the current element after the recursive call
    cout << x << " ";
    
    // Push the element back to restore the original stack order
    st.push(x);
}

// Function to display the elements of the stack in LIFO order
// using recursion and without restoring the original order.
void displayrec(stack<int>& dt)
{
    // Base case: if the stack is empty, return.
    if (dt.size() == 0) return;
    
    // Print the top element
    int x = dt.top();
    cout << x << " ";
    
    // Pop the element to proceed to the next
    dt.pop();
    
    // Recursive call to display remaining elements
    displayrec(dt);
    
    // Push the element back to restore the stack order
    dt.push(x);
}

// Function to push an element at the bottom of the stack
void pushAtBottom(stack<int>& gt, int val)
{
    // Base case: if the stack is empty, push the value at the bottom
    if (gt.size() == 0)
    {
        gt.push(val);
        return;
    }
    
    // Store and remove the top element
    int x = gt.top();
    gt.pop();
    
    // Recursive call to reach the bottom of the stack
    pushAtBottom(gt, val);
    
    // Push the stored element back on top
    gt.push(x);
}

// Function to reverse the stack using recursion
void reverse(stack<int>& st)
{
    // Base case: if there is only one element, no need to reverse
    if (st.size() == 1) return;
    
    // Store and remove the top element
    int x = st.top();
    st.pop();
    
    // Recursively reverse the remaining stack
    reverse(st);
    
    // Push the stored element to the bottom of the reversed stack
    pushAtBottom(st, x);
}

int main()
{
    // Creating a stack and pushing elements
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    // Display the stack elements without modifying the stack order
    display(st);
    cout << endl;
    
    // Uncomment to display stack in LIFO order and test other functions
    /*
    displayrec(st);
    pushAtBottom(st, -10);
    cout << endl;
    displayrec(st);
    */
    
    // Reverse the stack and display the reversed stack
    reverse(st);
    cout << endl;
    display(st);

    return 0;
}
