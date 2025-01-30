#include<iostream>
using namespace std;

// Node class representing each element in the stack
class Node {
public:
    int val;      // Value of the node
    Node* next;   // Pointer to the next node

    // Constructor to initialize a node with a value
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Stack class implemented using linked list
class Stack {
public:
    Node* head;   // Pointer to the top element of the stack
    int size;     // Number of elements in the stack

    // Constructor to initialize an empty stack
    Stack() {
        head = NULL;  // Stack is initially empty
        size = 0;
    }

    // Function to push an element onto the stack
    void push(int val) {
        Node* temp = new Node(val); // Create a new node
        temp->next = head;          // New node points to current top
        head = temp;                // Update head to new node
        size++;                     // Increase stack size
    }

    // Function to pop the top element from the stack
    void pop() {
        if (size == 0) {            // Check if stack is empty
            cout << "Stack is empty" << endl;
            return;
        }
        head = head->next;          // Move head to the next node
        size--;                     // Decrease stack size
    }

    // Function to get the top element of the stack
    int top() {
        if (head == NULL) {         // Check if stack is empty
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->val;           // Return value of top element
    }

    // Recursive function to print elements in the stack
    void print(Node* temp) {
        if (temp == NULL) return;   // Base case: end of stack
        print(temp->next);          // Recursive call to the next node
        cout << temp->val << " ";   // Print current node's value
    }

    // Function to display all elements in the stack (from bottom to top)
    void display() {
        Node* temp = head;
        print(temp);                // Call recursive print function
        cout << endl;
    }
};

int main() {
    Stack st;

    // Initial operations on the stack
    cout << st.top() << endl;       // Should print "Stack is empty"
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << st.size << endl;        // Print current stack size
    cout << st.top() << endl;       // Print top element of the stack

    st.pop();                       // Remove the top element
    cout << st.size << endl;        // Print size after popping

    st.display();                   // Display all elements in the stack
}
