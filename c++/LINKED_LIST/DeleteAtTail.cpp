#include<iostream>
using namespace std;

class Node {
    public:
    int val; // Value of the node
    Node* next; // Pointer to the next node

    // Constructor to initialize a new node with a given value
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
    public:
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list
    int size; // Number of nodes in the list

    // Constructor to initialize an empty linked list
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    // Method to insert a new node at the head of the list
    void insertAtHead(int val) {
        Node *temp = new Node(val); // Create a new node
        if(size == 0) {
            // If the list is empty, both head and tail point to the new node
            head = tail = temp;
        } else {
            // Otherwise, insert the new node before the current head
            temp->next = head;
            head = temp;
        }
        size++; // Increment the size of the list
    }

    // Method to insert a new node at the tail of the list
    void InsertAtTail(int val) {
        Node *temp = new Node(val); // Create a new node

        if(size == 0) {
            // If the list is empty, both head and tail point to the new node
            head = tail = temp;
        } else {
            // Otherwise, append the new node after the current tail
            tail->next = temp;
            tail = temp;
        }
        size++; // Increment the size of the list
    }

    // Method to get the value of the node at a specific index
    int get_element_AtIndex(int idx) {
        if(idx >= size || idx < 0) {
            cout << "Invalid Index ";
            return -1; // Return -1 to indicate an invalid index
        } else if(idx == 0) {
            return head->val; // Return the value at the head
        } else if(idx == size - 1) {
            return tail->val; // Return the value at the tail
        } else {
            Node *temp = head;
            // Traverse the list to find the node at the given index
            for(int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val; // Return the value at the given index
        }
    }

    // Method to delete the node at the head of the list
    void deleteAt_head() {
        if(size == 0) {
            cout << "Empty LinkedList";
            return; // Return if the list is empty
        }
        Node *temp = head;
        head = head->next; // Move the head to the next node
        delete temp; // Free the memory of the old head
        size--; // Decrement the size of the list
    }

    // Method to delete the node at the tail of the list
    void delete_At_Tail() {
        if(size == 0) {
            cout << "Empty LinkedList";
            return; // Return if the list is empty
        }
        if(size == 1) {
            // Special case: if there's only one node
            delete head; // Free the memory of the only node
            head = tail = NULL; // Reset both head and tail to NULL
        } else {
            Node *temp = head;
            // Traverse to the second last node
            while(temp->next != tail) {
                temp = temp->next;
            }
            delete tail; // Free the memory of the last node
            tail = temp; // Update tail to the new last node
            tail->next = NULL; // Ensure the new tail's next pointer is NULL
        }
        size--; // Decrement the size of the list
    }

    // Method to display all the nodes in the list
    void display() {
        Node* temp = head;
        // Traverse the list and print each node's value
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl; // Print a newline after the list
    }
};

int main() {
    LinkedList ll; // Create a new linked list
    ll.insertAtHead(12); // Insert 12 at the head
    ll.insertAtHead(13); // Insert 13 at the head
    ll.insertAtHead(14); // Insert 14 at the head
    ll.display(); // Display the list
    cout << ll.size << endl; // Print the size of the list
    ll.insertAtHead(10); // Insert 10 at the head
    ll.insertAtHead(14); // Insert another 14 at the head
    ll.display(); // Display the list
    ll.delete_At_Tail(); // Delete the node at the tail
    ll.display(); // Display the list after deletion

    return 0;
}
