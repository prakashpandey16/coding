#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    Node *prev;

    // Constructor to initialize a node
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL {
    public:
    int size;
    Node* head;
    Node* tail;

    // Constructor to initialize an empty doubly linked list
    DLL() {
        head = tail = NULL;
        size = 0;
    }

    // Function to insert a value at the head of the list
    void InsertAtHead(int val) {
        Node *temp = new Node(val);
        if (size == 0) {
            head = tail = temp;  // List is empty, so head and tail point to the same node
        } else {
            temp->next = head;  // Point new node's next to the current head
            head->prev = temp;  // Point current head's previous to new node
            head = temp;        // Update head to the new node
        }
        size++;
    }

    // Function to insert a value at the tail of the list
    void InsertAtTail(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;  // List is empty, head and tail point to the same node
        } else {
            tail->next = temp;   // Tail's next should point to new node
            temp->prev = tail;   // New node's previous should point to the old tail
            tail = temp;         // Update tail to the new node
        }
        size++;
    }

    // Function to insert a value at any index in the list
    void insertAtAnyIndex(int idx, int val) {
        if (idx < 0 || idx > size) {
            // Check for invalid index
            cout << "Invalid index" << endl;
            return;
        }

        // Insert at head if index is 0
        if (idx == 0) {
            InsertAtHead(val);
        }
        // Insert at tail if index is equal to size
        else if (idx == size) {
            InsertAtTail(val);
        }
        else {
            Node* t = new Node(val);
            Node* temp = head;

            // Traverse the list to find the node at the given index
            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }

            // Insert the new node in the middle
            t->next = temp->next;
            t->prev = temp;
            temp->next->prev = t;
            temp->next = t;
            size++;
        }
    }

    // Function to display the list
    void display() {
        Node* current = head;  // Store the head pointer to traverse the list
        while (current != NULL) {
            cout << current->val << " ";  // Print the current node's value
            current = current->next;      // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    DLL ll;  // Create a doubly linked list

    // Insert nodes into the list
    ll.InsertAtTail(30);
    ll.InsertAtHead(40);
    ll.insertAtAnyIndex(1, 50);  // Insert 50 at index 1
    ll.InsertAtHead(100);        // Insert 100 at head
    ll.InsertAtHead(20);         // Insert 20 at head

    ll.display();  // Display the list
    cout << ll.size << endl;  // Output the size of the list

    return 0;
}
