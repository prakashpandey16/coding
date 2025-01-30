#include<iostream>
using namespace std;

// Class to represent a simple queue
class Queue {
public:
    int f; // Front index
    int b; // Back index
    int s;// current size
    int arr[5]; // Array to hold the queue elements, fixed size of 5

    // Constructor initializes front and back indices to 0
    Queue() {
       f = 0;
       b = 0;
       s = 0;
    }

    // Function to add an element to the queue
    void push(int val) {
        if(b == 5) { // Check if the queue is full
            cout << "Queue is full!" << endl;
            return;
        }
        arr[b] = val; // Add element at the back
        b++; // Increment the back index
        s++;
    }

    // Function to remove an element from the queue
    void pop() {
        if(s == 0) { // Check if the queue is empty
            cout << "Queue is empty!" << endl;
            return;
        }
        f++; // Increment the front index to remove the front element
        s--;
    }

    // Function to get the front element of the queue
    int front() {
        if(s == 0) { // Check if the queue is empty
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[f]; // Return the front element
    }

    // Function to get the back element of the queue
    int back() {
        if(s == 0) { // Check if the queue is empty
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[b - 1]; // Return the back element
    }

    // Function to get the size of the queue
    int size() {
        if( s == 0) { // Check if the queue is empty
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return b - f; // Return the size of the queue
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        if(s == 0) return true; // Return true if queue is empty
        else return false;
    }

    // Function to display all elements of the queue
    void display() {
        for(int i = f; i < b; i++) { // Iterate from front to back
            cout << arr[i] << " "; // Print each element
        }
        cout << endl; // End the line after printing all elements
    }
};

int main() {
    Queue q; // Create a queue object
    q.push(10); // Add elements to the queue
    q.push(20);
    q.push(30);
    
    q.display(); // Display queue contents
    cout << q.size() << endl; // Print size of the queue
    q.push(40); // Add more elements
    q.push(50);
    q.push(60); // Attempt to add element when the queue is full
    q.display(); // Display queue contents again
    cout << q.front() << endl; // Print the front element
    cout << q.back() << endl; // Print the back element
    q.pop(); // Remove elements from the queue
    q.pop();
    q.display(); // Display updated queue contents
}

