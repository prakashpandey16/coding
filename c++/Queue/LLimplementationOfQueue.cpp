#include<iostream>
using namespace std;

// Define a node class for the linked list
class ListNode {
    public:
    int val; // Value of the node
    ListNode* next; // Pointer to the next node
    
    // Constructor to initialize a node
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Define the Queue class using linked list
class Queue {
    public:
    ListNode* head; // Pointer to the front of the queue
    ListNode* Tail; // Pointer to the back of the queue
    int size; // Current size of the queue

    // Constructor to initialize the queue
    Queue() {
        head = Tail = NULL;
        size = 0;
    }

    // Push a new value to the end of the queue
    void push(int val) {
        ListNode* temp = new ListNode(val); // Create a new node
        if (size == 0) { // If queue is empty, initialize head and Tail
            head = Tail = temp;
        } else { // Otherwise, add the new node at the end
            Tail->next = temp;
            Tail = temp;
        }
        size++; // Increment size
    }

    // Pop the front element from the queue
    void pop() {
        if (size == 0) { // If the queue is empty
            cout << "Empty LinkedList" << endl;
            return;
        }
        if (size == 1) { // If only one element is present
            head = Tail = NULL;
        } else { // Remove the front node
            head = head->next;
        }
        size--; // Decrement size
    }

    // Return the value at the front of the queue
    int front() {
        if (size == 0) { // If the queue is empty
            cout << "Empty LinkedList" << endl;
            return -1;
        }
        return head->val;
    }

    // Return the value at the back of the queue
    int back() {
        if (size == 0) { // If the queue is empty
            cout << "Empty LinkedList" << endl;
            return -1;
        }
        return Tail->val;
    }

    // Return the current size of the queue
    int sizeofQueue() {
        if (size == 0) { // If the queue is empty
            cout << "Empty LinkedList" << endl;
            return -1;
        }
        return size;
    }

    // Check if the queue is empty
    bool empty() {
        return size == 0;
    }

    // Display all elements in the queue
    void display() {
        ListNode* temp = head; // Start from the front
        while (temp != NULL) { // Traverse until the end
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function
int main() {
    Queue q; // Create a queue object

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    
    // Display queue contents
    q.display();

    // Print size of the queue
    cout << q.sizeofQueue() << endl;

    // Add more elements to the queue
    q.push(40);
    q.push(50);
    q.push(60);

    // Display queue contents again
    q.display();

    // Print the front element
    cout << q.front() << endl;

    // Print the back element
    cout << q.back() << endl;

    // Remove elements from the queue
    q.pop();
    q.pop();

    // Display updated queue contents
    q.display();

    return 0;
}

