#include<iostream>
using namespace std;

// Stack class definition
class Stack {
public:
    int arr[5]; // Array to store stack elements (with a fixed size of 5)
    int idx;    // Index to track the top of the stack

    // Constructor to initialize the stack
    Stack() {
        idx = -1; // Initially, the stack is empty, so idx is set to -1
    }

    // Function to push an element onto the stack
    void push(int val) {
        if (idx == 4) { // Check if the stack is full (max index for array of size 5 is 4)
            cout << "Stack is full" << endl;
            return;
        }
        idx++;          // Increment the index
        arr[idx] = val; // Place the new element at the top of the stack
    }

    // Function to pop the top element from the stack
    void pop() {
        if (idx == -1) { // Check if the stack is empty
            cout << "stack is empty" << endl;
            return;
        }
        idx--; // Decrement the index to remove the top element
    }

    // Function to get the top element of the stack
    int top() {
        if (idx == -1) { // Check if the stack is empty
            cout << "stack is empty" << endl;
            return -1; // Return -1 to indicate an empty stack
        }
        return arr[idx]; // Return the top element of the stack
    }

    // Function to get the size of the stack (number of elements in the stack)
    int size() {
        return idx + 1; // idx + 1 gives the current size of the stack
    }
    void display()
    {
        for(int i=0; i<=idx;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    Stack st;           // Create a Stack object

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);        // This will display "Stack is full" as stack has only 5 elements

    cout << st.size() << endl; // Output the current size of the stack
    cout << st.top() << endl;  // Output the top element of the stack

    st.pop();                  // Remove the top element from the stack

    cout << st.size() << endl; // Output the size of the stack after pop operation
    st.display();
}
