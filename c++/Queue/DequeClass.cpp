#include <iostream>
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

class Deque {
public:
    int size;
    Node *head;
    Node *tail;

    // Constructor to initialize an empty doubly linked list
    Deque() {
        head = tail = NULL;
        size = 0;
    }

    // Function to insert a value at the head of the list
    void push_front(int val) {
        Node *temp = new Node(val);
        if (size == 0) {
            head = tail = temp; // List is empty, so head and tail point to the same node
        } else {
            temp->next = head; // Point new node's next to the current head
            head->prev = temp; // Point current head's previous to new node
            head = temp;       // Update head to the new node
        }
        size++;
    }

    // Function to insert a value at the tail of the list
    void push_back(int val) {
        Node *temp = new Node(val);
        if (size == 0) {
            head = tail = temp; // List is empty, head and tail point to the same node
        } else {
            tail->next = temp;  // Tail's next should point to new node
            temp->prev = tail;  // New node's previous should point to the old tail
            tail = temp;        // Update tail to the new node
        }
        size++;
    }

    // Function to delete the node at the head of the list
    void pop_front() {
        if (size == 0) {
            cout << "Deque is empty. Cannot delete from the front." << endl;
            return;
        }

        Node *temp = head;        // Store the head node to delete
        head = head->next;        // Move head to the next node
        if (head) {
            head->prev = NULL;    // Update the new head's previous to NULL
        } else {
            tail = NULL;          // If the list becomes empty, update tail
        }
        delete temp;              // Free memory of the old head node
        size--;
    }

    // Function to delete the node at the tail of the list
    void pop_back() {
        if (size == 0) {
            cout << "Deque is empty. Cannot delete from the back." << endl;
            return;
        }

        Node *temp = tail;        // Store the tail node to delete
        tail = tail->prev;        // Move tail to the previous node
        if (tail) {
            tail->next = NULL;    // Update the new tail's next to NULL
        } else {
            head = NULL;          // If the list becomes empty, update head
        }
        delete temp;              // Free memory of the old tail node
        size--;
    }
    int front()
    {
        if(size==0)
        {
           cout << "Deque is empty. Cannot delete from the back." << endl;
            return -1;
        }
        return head->val;
    }
    int back()
    {
        if(size==0)
        {
           cout << "Deque is empty. Cannot delete from the back." << endl;
            return -1;
        }
        return tail->val;

    }
    int sizeofDeque()
    {
        return size;
    }

    // Function to display the list
    void display() {
        Node *current = head; // Store the head pointer to traverse the list
        while (current != NULL) {
            cout << current->val << " "; // Print the current node's value
            current = current->next;    // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    Deque dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);

    cout << "Deque after inserting elements: ";
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    dq.pop_front();
    cout << "Deque after deleting from front: ";
    dq.display();

    dq.pop_back();
    cout << "Deque after deleting from back: ";
    dq.display();

    dq.pop_front();
    dq.pop_front();
    dq.pop_front(); // Attempt to delete from an empty deque


    return 0;
}
