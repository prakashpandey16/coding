#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure definition for a node in the linked list
struct Node {
    int val;              // Value stored in the node
    struct Node* next;    // Pointer to the next node
};

// Function to create a new node with a given value
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->val = val;    // Set the value of the node
    newNode->next = NULL;  // Initialize the next pointer to NULL
    return newNode;        // Return the new node
}

// Function to search for a value in the linked list
void searching(struct Node* head, int target) {
    int index = 0;         // Variable to track the index of nodes
    bool found = false;    // Flag to indicate if the target is found

    while (head != NULL) { // Traverse the linked list
        if (head->val == target) { // Check if the current node's value matches the target
            found = true;
            break;          // Exit the loop if target is found
        }
        head = head->next;  // Move to the next node
        index++;            // Increment the index
    }

    // Output the result of the search
    if (found) 
        printf("Element found at index %d\n", index);
    else 
        printf("Element is not present  linked list.\n");
}

// Function to display all elements in the linked list
void Display(struct Node* head) {
    while (head != NULL) {  // Traverse the linked list
        printf("%d ", head->val); // Print the value of the current node
        head = head->next;  // Move to the next node
    }
    printf("\n");           // Print a newline after displaying the list
}

// Main function
int main() {
    // Creating nodes
    struct Node* a = createNode(10);
    struct Node* b = createNode(20);
    struct Node* c = createNode(30);
    struct Node* d = createNode(40);

    // Connecting nodes to form the linked list
    a->next = b;
    b->next = c;
    c->next = d;

    printf("Linked List: ");
    Display(a); // Display the linked list

    // Taking input from the user for the value to search
    int x;
    printf("Enter a value that you want to search in the linked list: ");
    scanf("%d", &x);

    // Searching for the input value in the linked list
    searching(a, x);

    // Freeing allocated memory for all nodes
    struct Node* temp;
    while (a != NULL) {
        temp = a;
        a = a->next;
        free(temp);
    d

    return 0; // Indicate successful program termination
}
