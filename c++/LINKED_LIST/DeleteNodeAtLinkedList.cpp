#include<iostream> 
using namespace std;

// Define the structure of a Node in the linked list
class Node {
public:
    int val;       // Value of the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a node with a value and set the next pointer to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to display the elements of the linked list
void display(Node* head) {
    Node* temp = head;
    // Traverse through the list and print the value of each node
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;  // Move to the next node
    }
    cout << endl;
}

// Function to delete a node (target) if we have the head and the target node
void delete_node(Node* head, Node* target) {
    Node* temp = head;

    // Traverse to the node before the target
    while (temp->next != target) {
        temp = temp->next;
    }
    // Bypass the target node by pointing to the node after the target
    temp->next = temp->next->next;
}

// Function to delete a node when the head and target node are provided, and target could be the head itself
Node* deleteNode(Node* head, Node* target) {
    // If the target node is the head, move the head to the next node
    if (head == target) {
        head = head->next;
        return head;
    }

    Node* temp = head;

    // Traverse to the node before the target node
    while (temp->next != target) {
        temp = temp->next;
    }
    // Bypass the target node
    temp->next = temp->next->next;
    return head;
}

// Function to delete a node when the head and target value are provided
Node* DeleteNode(Node* head, int targetval) {
    // If the target value is in the head node, move the head to the next node
    if (head->val == targetval) {
        head = head->next;
        return head;
    }

    Node* temp = head;

    // Traverse the list until the target value is found
    while (temp->next->val != targetval) {
        temp = temp->next;
    }
    // Bypass the node with the target value
    temp->next = temp->next->next;
    return head;
}

int main() {
    // Create a linked list: 20 -> 30 -> 40 -> 50 -> 60
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // Display the original linked list
    display(a);  // Output: 20 30 40 50 60

    // Delete node 'c' (value 40) using the delete_node function
    delete_node(a, c);
    display(a);  // Output: 20 30 50 60

    // Reset the head pointer to 'a'
    Node* head = a;

    // Display the current linked list
    display(head);  // Output: 20 30 50 60

    // Attempt to delete 'c' again using the deleteNode function (this would now fail because 'c' was already deleted)
    // head = deleteNode(head, c);
    // display(head);  // This would cause an error if uncommented since 'c' was already deleted

    // Delete the node with value 30
    head = DeleteNode(head, 30);
    display(head);  // Output: 20 50 60

    return 0;
}

