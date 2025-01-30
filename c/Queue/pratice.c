#include <stdio.h>
#include <stdlib.h>

// Define the structure of a Node in the linked list
typedef struct Node {
    int val;            // Value stored in the node
    struct Node* next;  // Pointer to the next node in the list
} Node;

// Define the structure of a Linked List
typedef struct LinkedList {
    Node* head;         // Pointer to the first node in the list
    Node* tail;         // Pointer to the last node in the list
    int size;           // Number of elements in the list
} LinkedList;

// Function to create a new node with a given value
Node* createNode(int val) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for the node
    newNode->val = val;    // Set the value of the node
    newNode->next = NULL;  // Initialize the next pointer as NULL
    return newNode;
}

// Function to initialize an empty linked list
void initLinkedList(LinkedList* ll) {
    ll->head = ll->tail = NULL; // Set both head and tail to NULL
    ll->size = 0;               // Initialize size to 0
}

// Function to insert a node at the tail of the list
void insertAtTail(LinkedList* ll, int val) {
    Node* temp = createNode(val); // Create a new node
    if (ll->size == 0) {          // If the list is empty
        ll->head = ll->tail = temp; // Both head and tail point to the new node
    } else {
        ll->tail->next = temp;    // Link the current tail to the new node
        ll->tail = temp;          // Update the tail pointer
    }
    ll->size++;                   // Increment the size of the list
}

// Function to insert a node at the head of the list
void insertAtHead(LinkedList* ll, int val) {
    Node* temp = createNode(val); // Create a new node
    if (ll->size == 0) {          // If the list is empty
        ll->head = ll->tail = temp; // Both head and tail point to the new node
    } else {
        temp->next = ll->head;    // Link the new node to the current head
        ll->head = temp;          // Update the head pointer
    }
    ll->size++;                   // Increment the size of the list
}

// Function to insert a node at a specific index in the list
void insertAtIdx(LinkedList* ll, int idx, int val) {
    if (idx < 0 || idx > ll->size) return; // Validate the index

    if (idx == 0) {             // Insert at the head
        insertAtHead(ll, val);
    } else if (idx == ll->size) { // Insert at the tail
        insertAtTail(ll, val);
    } else {
        Node* temp = ll->head;
        for (int i = 1; i <= idx - 1; i++) { // Traverse to the node before the desired position
            temp = temp->next;
        }
        Node* newNode = createNode(val); // Create the new node
        newNode->next = temp->next;      // Link the new node to the next node
        temp->next = newNode;            // Link the current node to the new node
        ll->size++;                      // Increment the size of the list
    }
}

// Function to delete the head node
void deleteAtHead(LinkedList* ll) {
    if (ll->size == 0) return; // If the list is empty, do nothing

    Node* temp = ll->head;     // Store the current head
    ll->head = ll->head->next; // Move the head pointer to the next node
    free(temp);                // Free the memory of the old head

    if (ll->size == 1) ll->tail = NULL; // If it was the only node, update the tail
    ll->size--;                         // Decrement the size of the list
}

// Function to delete the tail node
void deleteAtTail(LinkedList* ll) {
    if (ll->size == 0) return; // If the list is empty, do nothing

    if (ll->size == 1) {       // If there's only one node
        free(ll->head);        // Free the single node
        ll->head = ll->tail = NULL; // Update head and tail to NULL
    } else {
        Node* temp = ll->head;
        while (temp->next != ll->tail) { // Traverse to the second last node
            temp = temp->next;
        }
        free(ll->tail);         // Free the last node
        ll->tail = temp;        // Update the tail pointer
        temp->next = NULL;      // Set the new tail's next to NULL
    }
    ll->size--;                 // Decrement the size of the list
}

// Function to delete a node at a specific index
void deleteAtIdx(LinkedList* ll, int idx) {
    if (idx < 0 || idx >= ll->size) return; // Validate the index

    if (idx == 0) {           // Delete at the head
        deleteAtHead(ll);
    } else if (idx == ll->size - 1) { // Delete at the tail
        deleteAtTail(ll);
    } else {
        Node* temp = ll->head;
        for (int i = 1; i <= idx - 1; i++) { // Traverse to the node before the desired position
            temp = temp->next;
        }
        Node* toDelete = temp->next; // Node to be deleted
        temp->next = toDelete->next; // Link the current node to the next of the deleted node
        free(toDelete);              // Free the memory of the deleted node
        ll->size--;                  // Decrement the size of the list
    }
}

// Function to display the elements of the list
void display(LinkedList* ll) {
    Node* temp = ll->head;
    while (temp != NULL) {    // Traverse the list and print each value
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");             // Print a newline at the end
}

// Main function to demonstrate the linked list operations
int main() {
    LinkedList ll;
    initLinkedList(&ll); // Initialize the linked list

    // Insert elements at the tail
    insertAtTail(&ll, 10);
    insertAtTail(&ll, 20);
    insertAtTail(&ll, 30);
    insertAtTail(&ll, 40);
    insertAtTail(&ll, 50);
    display(&ll); // Output: 10 20 30 40 50

    // Insert an element at the head
    insertAtHead(&ll, 15);
    display(&ll); // Output: 15 10 20 30 40 50

    // Insert an element at a specific index
    insertAtIdx(&ll, 2, 25);
    display(&ll); // Output: 15 10 25 20 30 40 50

    // Delete the head node
    deleteAtHead(&ll);
    display(&ll); // Output: 10 25 20 30 40 50

    // Delete the tail node
    deleteAtTail(&ll);
    display(&ll); // Output: 10 25 20 30 40

    // Delete a node at a specific index
    deleteAtIdx(&ll, 2);
    display(&ll); // Output: 10 25 30 40

    return 0; // Exit the program
}

