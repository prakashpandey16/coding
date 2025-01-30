#include <stdio.h>
#include <stdlib.h>

// Definition of a Node structure
struct Node {
    int value;             // Value stored in the node
    struct Node* next;     // Pointer to the next node
};

// Function to create a new node with a given value
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the head of the linked list
struct Node* insertAtHead(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    return newNode; // Return the updated head
}

// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL) { // If the list is empty
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link the last node to the new node
    return head;
}

// Function to insert a node at a specific index (0-based index)
struct Node* insertAtIndex(struct Node* head, int value, int index) {
    if (index == 0) { // If index is 0, insert at the head
        return insertAtHead(head, value);
    }

    struct Node* temp = head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) { // Traverse to the (index-1)th node
        temp = temp->next;
    }

    if (temp == NULL) { // If index is out of bounds
        printf("Error: Index out of bounds\n");
        return head;
    }

    struct Node* newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode; // Insert the new node
    return head;
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    // Create initial nodes
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);
    struct Node* fourth = createNode(40);

    // Connect the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Display the original list
    printf("Original List:\n");
    displayList(head);

    // Insert at the head
    head = insertAtHead(head, 60);
    printf("After inserting at head:\n");
    displayList(head);

    // Insert at the end
    head = insertAtEnd(head, 70);
    printf("After inserting at end:\n");
    displayList(head);

    // Insert at index 4 (0-based index)
    head = insertAtIndex(head, 50, 4);
    printf("After inserting at index 4:\n");
    displayList(head);

    // Free the memory
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}