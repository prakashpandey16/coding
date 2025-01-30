#include<iostream>
using namespace std;

// Class definition for a Node in the linked list
class Node
{
    public:
    int val; // Value stored in the node
    Node* next; // Pointer to the next node in the linked list

    // Constructor to initialize the node with a value
    Node(int val)
    {
        this->val = val;  // Assign value to the node
        this->next = NULL; // Initially, the next pointer is NULL
    }
};

int main()
{
    // Creating four nodes with value 10
    Node* a = new Node(10); 
    Node* b = new Node(20); 
    Node* c = new Node(30); 
    Node* d = new Node(40); 

    // Linking the nodes to form a linked list: a -> b -> c -> d
    a->next = b; 
    b->next = c; 
    c->next = d; 

    // Traversing the linked list and printing the values of each node
    Node* temp = a;  // Starting from the head of the linked list (node 'a')
    while(temp != NULL) // Traverse until the end of the list (NULL)
    {
        cout << temp->val << " "; // Print the value of the current node
        temp = temp->next;  // Move to the next node in the list
    }

    // Return 0 to indicate successful execution
    return 0;
}

