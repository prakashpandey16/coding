#include <vector>
using namespace std;

class MyCircularQueue {
public:
    int f; // Front index
    int b; // Back index
    int s; // Current size
    int c; // Capacity
    vector<int> arr;

    MyCircularQueue(int k) {
        f = 0;
        b = 0;
        s = 0;
        c = k;
        arr.resize(k); // Initialize vector with size k
    }

    bool enQueue(int val) { // Push an element to the queue
        if (isFull()) return false; // Check if queue is full
        arr[b] = val; // Add value at the back
        b = (b + 1) % c; // Move back pointer circularly
        s++; // Increment size
        return true; // Successful insertion
    }

    bool deQueue() { // Pop an element from the queue
        if (isEmpty()) return false; // Check if queue is empty
        f = (f + 1) % c; // Move front pointer circularly
        s--; // Decrement size
        return true; // Successful deletion
    }

    int Front() { // Get the front element
        if (isEmpty()) return -1; // Return -1 if queue is empty
        return arr[f];
    }

    int Rear() { // Get the last element
        if (isEmpty()) return -1; // Return -1 if queue is empty
        return arr[(b - 1 + c) % c]; // Handle circular index for rear
    }

    bool isEmpty() { // Check if queue is empty
        return s == 0;
    }

    bool isFull() { // Check if queue is full
        return s == c;
    }
};
