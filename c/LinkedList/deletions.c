#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int val;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to delete the head node
struct Node* deleteAtHead(struct Node* head) {
    if (head == NULL) {
        printf("LinkedList is empty.\n");
        return NULL;
    }
    struct Node* temp = head; // Save the current head
    head = head->next;        // Move the head to the next node
    free(temp);               // Free the old head
    return head;
}

// Function to delete the last node
struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) {
        printf("LinkedList is empty.\n");
        return NULL;
    }
    if (head->next == NULL) { // If there's only one node
        free(head);
        return NULL;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) { // Traverse to the second last node
        temp = temp->next;
    }
    free(temp->next); // Free the last node
    temp->next = NULL;
    return head;
}

// Function to delete a node at a specific index
struct Node* deleteAtAnyIndex(struct Node* head, int idx) {
    if (head == NULL) {
        printf("LinkedList is empty.\n");
        return NULL;
    }
    if (idx == 0) { // If index is 0, delete the head
        return deleteAtHead(head);
    }
    struct Node* temp = head;
    for (int i = 0; i < idx - 1 && temp->next != NULL; i++) { // Traverse to (idx-1)th node
        temp = temp->next;
    }
    if (temp->next == NULL) { // If index is out of bounds
        printf("Index out of bounds.\n");
        return head;
    }
    struct Node* nodeToDelete = temp->next; // Node to be deleted
    temp->next = nodeToDelete->next;        // Skip the deleted node
    free(nodeToDelete);                     // Free the memory
    return head;
}

// Function to display the linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("LinkedList is empty.\n");
        return;
    }
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

// Main function
int main() {
    // Create and connect nodes manually
    struct Node* a = createNode(10);
    struct Node* b = createNode(20);
    struct Node* c = createNode(30);
    struct Node* d = createNode(40);

    a->next = b;
    b->next = c;
    c->next = d;

    printf("Original List:\n");
    display(a);

    // Test deleting the head
    a = deleteAtHead(a);
    printf("After Deleting Head:\n");
    display(a);

    // Test deleting the last node
    a = deleteAtEnd(a);
    printf("After Deleting End:\n");
    display(a);

    // Test deleting at a specific index
    a = deleteAtAnyIndex(a, 1);
    printf("After Deleting Index 1:\n");
    display(a);

    // Free remaining nodes
    while (a != NULL) {
        struct Node* temp = a;
        a = a->next;
        free(temp);
    }

    return 0;
}
