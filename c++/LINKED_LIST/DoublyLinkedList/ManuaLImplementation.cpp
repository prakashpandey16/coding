#include <iostream>
using namespace std;

// Node class representing each element in the doubly linked list
class Node {
public:
    int val;       // Value of the node
    Node* next;   // Pointer to the next node
    Node* prev;   // Pointer to the previous node

    // Constructor to initialize the node's value and pointers
    Node(int val) {
        this->val = val;  // Assign value
        this->next = NULL; // Initialize next pointer to NULL
        this->prev = NULL; // Initialize previous pointer to NULL
    }
};

// Function to display the list from head to tail
void Display(Node* head) {
    while (head) {  // Traverse until the end of the list
        cout << head->val << " "; // Print current node's value
        head = head->next; // Move to the next node
    }
    cout << endl; // End the line after displaying the list
}

// Recursive function to display the list from head to tail
void displayRec(Node* head) {
    if (head == NULL) return; // Base case: if the head is NULL, return
    cout << head->val << " "; // Print current node's value
    displayRec(head->next); // Recursive call for the next node
}

// Recursive function to display the list from head to tail in reverse
void displayRecRev(Node* head) {
    if (head == NULL) return; // Base case: if the head is NULL, return
    displayRecRev(head->next); // Recursive call for the next node
    cout << head->val << " "; // Print current node's value after the recursive call
}

// Function to display the list from tail to head
void displayREV(Node* tail) {
    while (tail) { // Traverse until the beginning of the list
        cout << tail->val << " "; // Print current node's value
        tail = tail->prev; // Move to the previous node
    }
    cout << endl; // End the line after displaying the list
}

int main() {
    // Creating nodes for the doubly linked list
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // Setting up the next pointers for the forward traversal
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // Setting up the previous pointers for the backward traversal
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    // Display the list using different methods
    Display(a);           // Display from head to tail
    displayRec(a);       // Recursive display from head to tail
    cout << endl;        // Line break
    displayRecRev(a);    // Recursive display from head to tail in reverse
    cout << endl;        // Line break
    displayREV(e);       // Display from tail to head
}
