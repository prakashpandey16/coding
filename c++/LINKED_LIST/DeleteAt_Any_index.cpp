#include<iostream>
using namespace std;

class Node {
    public:
    int val;      // Value stored in the node
    Node* next;   // Pointer to the next node

    // Constructor to initialize the node with a value and null next pointer
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
    public:
    Node* head;   // Pointer to the head (first node) of the linked list
    Node* tail;   // Pointer to the tail (last node) of the linked list
    int size;     // Size of the linked list

    // Constructor to initialize an empty linked list
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    // Insert a new node at the head (beginning) of the linked list
    void insertAtHead(int val) {
        Node *temp = new Node(val);  // Create a new node
        if(size == 0) {
            head = tail = temp;      // If list is empty, head and tail are the same
        } else {
            temp->next = head;       // Link the new node to the current head
            head = temp;             // Update the head to the new node
        }
        size++;                      // Increment the size of the linked list
    }

    // Insert a new node at the tail (end) of the linked list
    void InsertAtTail(int val) {
        Node *temp = new Node(val);  // Create a new node
        if(size == 0) {
            head = tail = temp;      // If the list is empty, head and tail are the same
        } else {
            tail->next = temp;       // Link the current tail to the new node
            tail = temp;             // Update the tail to the new node
        }
        size++;                      // Increment the size of the linked list
    }

    // Get the value of the node at a specific index
    int get_element_AtIndex(int idx) {
        if(idx >= size || idx < 0) { // Check for invalid index
            cout << "Invalid Index ";
            return -1;
        } else if(idx == 0) {
            return head->val;        // Return the value at the head
        } else if(idx == size - 1) {
            return tail->val;        // Return the value at the tail
        } else {
            // Traverse to the node at the specified index
            Node *temp = head;
            for(int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val;        // Return the value at the index
        }
    }

    // Delete the node at the head of the linked list
    void deleteAt_head() {
        if(size == 0) {
            cout << "Empty LinkedList";
            return;
        }
        head = head->next;    // Update the head to the next node
        size--;               // Decrease the size of the linked list
    }

    // Delete the node at the tail of the linked list
    void delete_At_Tail() {
        if(size == 0) {
            cout << "Empty LinkedList";
            return;
        }
        if(size == 1) {       // If there is only one element in the list
            head = tail = NULL;
        } else {
            Node *temp = head;
            while(temp->next != tail) {  // Traverse to the second last node
                temp = temp->next;
            }
            tail = temp;      // Update the tail to the second last node
            tail->next = NULL;
        }
        size--;               // Decrease the size of the linked list
    }

    // Delete the node at any given index
    void delete_At_AnyIndex(int idx) {
        if(size == 0) {       // Check if the list is empty
            cout << "Empty LinkedList";
            return;
        } else if(idx >= size || idx < 0) {  // Check for invalid index
            cout << "Invalid index";
            return;
        } else if(idx == 0) {  // If deleting the head node
            deleteAt_head();
        } else if(idx == size - 1) {  // If deleting the tail node
            delete_At_Tail();
        } else {
            Node *temp = head;
            for(int i = 1; i < idx; i++) {  // Traverse to the node before the one to delete
                temp = temp->next;
            }
            temp->next = temp->next->next;  // Skip the node to be deleted
            size--;                         // Decrease the size of the linked list
        }
    }

    // Display the values in the linked list
    void display() {
        Node* temp = head;  // Temporary pointer to traverse the linked list
        while(temp != NULL) {
            cout << temp->val << " ";  // Print the value of the current node
            temp = temp->next;         // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;           // Create a linked list object

    ll.insertAtHead(12);     // Insert value 12 at the head
    ll.insertAtHead(13);     // Insert value 13 at the head
    ll.insertAtHead(14);     // Insert value 14 at the head
    ll.display();            // Display the list: 14 13 12
    cout << ll.size << endl; // Output the size of the list: 3

    ll.insertAtHead(10);     // Insert value 10 at the head
    ll.insertAtHead(14);     // Insert value 14 at the head
    ll.display();            // Display the list: 14 10 14 13 12

    ll.delete_At_AnyIndex(3);  // Delete the node at index 3
    ll.display();              // Display the list: 14 10 14 12

    return 0;
}
