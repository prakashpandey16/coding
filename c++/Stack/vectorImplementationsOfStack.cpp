#include<iostream>
#include<vector>
using namespace std;

// Stack class definition using a vector
class Stack {
public:
    vector<int> v; // Vector to store stack elements dynamically

    // Constructor
    Stack() {
        // No initialization needed for vector-based stack
    }

    // Function to push an element onto the stack
    void push(int val) {
        v.push_back(val); // Adds the element at the end of the vector
    }

    // Function to pop the top element from the stack
    void pop() {
        if (v.size() == 0) { // Check if the stack is empty
            cout << "stack is empty" << endl;
            return;
        }
        v.pop_back(); // Removes the last element (top of the stack)
    }

    // Function to get the top element of the stack
    int top() {
        if (v.size() == 0) { // Check if the stack is empty
            cout << "stack is empty" << endl;
            return -1; // Return -1 to indicate an empty stack
        }
        return v[v.size() - 1]; // Return the last element in the vector
    }

    // Function to get the size of the stack (number of elements in the stack)
    int size() {
        return v.size(); // Returns the number of elements in the vector
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
    st.push(60);        // This will be added without any limit since vector is dynamic

    cout << st.size() << endl; // Output the current size of the stack
    cout << st.top() << endl;  // Output the top element of the stack

    st.pop();                  // Remove the top element from the stack

    cout << st.size() << endl; // Output the size of the stack after pop operation
}
 