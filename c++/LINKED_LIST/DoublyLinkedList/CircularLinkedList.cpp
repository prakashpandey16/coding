#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int val) {
        this->next = NULL;
        this->val = val;
    }
};

void display(Node* head) {
    if (head == NULL) return;  // Empty list check

    Node* temp = head;
    
    // Loop through the circular linked list
    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);  // Stop when we reach the head again
    
    cout << endl;
}

void insertAdd(int a, Node* head) {
    Node* temp = head;
    Node* e = new Node(a);
    
    // Traverse to the last node
    while (temp->next != head) {
        temp = temp->next;
    }
    
    // Link the last node to the new node
    temp->next = e;
    
    // Make the new node point to the head (circular linking)
    e->next = head;
}

int main() {
    // Create nodes
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    
    // Form the circular linked list
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;  // Make it circular by linking the last node to the head
    
    // Display the linked list
    display(a);
    
    // Insert a new node with value 50
    insertAdd(50, a);
    
    // Display the updated linked list
    display(a);

    return 0;
}

