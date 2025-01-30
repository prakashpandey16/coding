#include<iostream>
using namespace std;

// Node class to represent each element in the linked list
class Node {
    public:
    int val;        // Stores the value of the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize node with a value and set next to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// LinkedList class to manage the operations on the linked list
class LinkedList {
    public:
    Node* head;    // Pointer to the first node (head) of the linked list
    Node* tail;    // Pointer to the last node (tail) of the linked list
    int size;      // Size of the linked list (number of nodes)

    // Constructor to initialize an empty linked list
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    // Function to insert a node at the head (beginning) of the list
    void insertAtHead(int val) {
        Node *temp = new Node(val); // Create a new node with the given value
        if(size == 0) {
            head = tail = temp;  // If the list is empty, both head and tail point to the new node
        } else {
            temp->next = head;   // Link the new node to the current head
            head = temp;         // Update the head to the new node
        }
        size++;  // Increase the size of the list
    }

    // Function to insert a node at the tail (end) of the list
    void InsertAtTail(int val) {
        Node *temp = new Node(val);  // Create a new node with the given value
        if(size == 0) {
            head = tail = temp;  // If the list is empty, both head and tail point to the new node
        } else {
            tail->next = temp;   // Link the current tail to the new node
            tail = temp;         // Update the tail to the new node
        }
        size++;  // Increase the size of the list
    }

    // Function to get the element at a specific index in the linked list
    int get_element_AtIndex(int idx) {
        if(idx >= size || idx < 0) {
            // If the index is out of bounds, return -1
            cout << "Invalid Index ";
            return -1;
        }
        else if(idx == 0) {
            // Return the value of the head if index is 0
            return head->val;
        }
        else if(idx == size - 1) {
            // Return the value of the tail if index is the last element
            return tail->val;
        }
        else {
            // Traverse the list to the desired index and return the value
            Node *temp = head;
            for(int i = 1; i <= idx; i++) {
                temp = temp->next;  // Move to the next node
            }
            return temp->val;  // Return the value at the specified index
        }
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;  // Temporary pointer to traverse the list
        while(temp != NULL) {
            cout << temp->val << " "; // Print each node's value
            temp = temp->next;        // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;               // Create a linked list object
    ll.insertAtHead(12);         // Insert value 12 at the head
    ll.insertAtHead(13);         // Insert value 13 at the head
    ll.insertAtHead(14);         // Insert value 14 at the head
    ll.display();                // Display the list: 14 13 12
    cout << ll.size << endl;     // Output the size of the list: 3

    ll.insertAtHead(10);         // Insert value 10 at the head
    ll.insertAtHead(14);         // Insert value 14 at the head
    ll.display();                // Display the list: 14 10 14 13 12
    cout << ll.size << endl;     // Output the size of the list: 5
    cout << ll.get_element_AtIndex(4);  // Output the element at index 4 (should return 12)

    return 0;
}
