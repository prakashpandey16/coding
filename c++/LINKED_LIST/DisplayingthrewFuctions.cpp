#include<iostream>
using namespace std;

// Class definition for a Node in the linked list
class Node {
public:
    int val;       // Value stored in the node
    Node* next;    // Pointer to the next node in the linked list

    // Constructor to initialize the node with a value
    Node(int val) {
        this->val = val;  // Assign the passed value to the node
        this->next = NULL; // Initially, the next pointer is NULL
    }

    // Function to calculate the size of the linked list
    int size(Node* head) {
        Node* temp = head;  // Start from the head node
        int n = 0;  // Variable to count the number of nodes
        while (temp != NULL) { // Traverse the list until the end (NULL)
            n++;  // Increment the counter for each node
            temp = temp->next; // Move to the next node
        }
        return n;  // Return the size of the linked list
    }
};

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;  // Start from the head node
    while (temp != NULL) { // Traverse the linked list until the end (NULL)
        cout << temp->val << " "; // Print the value of the current node
        temp = temp->next; // Move to the next node
    }
    cout << endl << endl; // Print two new lines after the list is displayed
}

// Function to insert a node at the end of the linked list
void InsertAtEnd(Node* head, int val) {
    Node* t = new Node(val); // Create a new node
    while (head->next != NULL) head = head->next; // Traverse to the last node
    head->next = t; // Link the last node to the new node
}

int main() {
    // Creating individual nodes with specific values
    Node* a = new Node(10); // First node with value 10
    Node* b = new Node(20); // Second node with value 20
    Node* c = new Node(30); // Third node with value 30
    Node* d = new Node(40); // Fourth node with value 40
    Node* e = new Node(60); // Fifth node with value 60

    // Linking the nodes to form a linked list: a -> b -> c -> d -> e
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // Display the linked list starting from node 'a'
    display(a);

    // Insert a new node with value 80 at the end
    InsertAtEnd(a, 80);
    
    // Display the updated linked list
    display(a);

    // Calculate and display the size of the linked list
    cout << "Size of the linked list: " << a->size(a) << endl;

    return 0;
}

