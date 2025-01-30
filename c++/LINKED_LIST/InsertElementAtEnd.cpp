#include<iostream>
using namespace std;

// Class to represent a node in the linked list
class Node {
    public:
    int val; // Value of the node
    Node* next; // Pointer to the next node in the list

    // Constructor to initialize a node with a given value
    // and set the next pointer to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Class to represent the linked list
class LinkedList {
    public:
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list
    int size;   // Size of the linked list

    // Constructor to initialize an empty linked list
    LinkedList() {
        head = tail = NULL; // Both head and tail are NULL initially
        size = 0;           // Size of the list is 0
    }

    // Method to insert a node with a given value at the end of the list
    void InsertAtEnd(int val) {
        Node *temp = new Node(val); // Create a new node with the given value

        // If the list is empty, both head and tail point to the new node
        if(size == 0) head = tail = temp;
        else {
            // If the list is not empty, update the next pointer of the current tail
            // to point to the new node and update the tail to the new node
            tail->next = temp;
            tail = temp;
        }
        size++; // Increment the size of the list
    }

    // Method to display the values in the linked list
    void display() {
        Node* temp = head; // Start from the head of the list

        // Traverse through the list and print each node's value
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next; // Move to the next node
        }
        cout << endl; // Newline for better output formatting
    }
};

// Main function to test the LinkedList class
int main() {
    LinkedList ll; // Create an empty linked list

    // Insert values at the end of the list and display the list after each insertion
    ll.InsertAtEnd(10); // Insert 10
    ll.display();       // Output: 10

    ll.InsertAtEnd(19); // Insert 19
    ll.InsertAtEnd(188); // Insert 188
    ll.display();       // Output: 10 19 188

    // Display the current size of the list
    cout << ll.size << endl; // Output: 3
}

