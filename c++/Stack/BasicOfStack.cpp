#include <iostream>
#include <stack>
using namespace std;

int main()
{
  // Define a stack of integers
  stack<int> st;

  // Push elements onto the stack
  st.push(10);  // Stack now: 10
  st.push(20);  // Stack now: 10, 20
  st.push(30);  // Stack now: 10, 20, 30

  // Display the top element and the size of the stack
  cout << st.top() << endl;   // Should print 30, the current top element
  cout << st.size() << endl;  // Should print 3, the current number of elements

  // Pop the top element from the stack
  st.pop();  // Stack now: 10, 20

  // Display the new top element and size after the pop
  cout << st.top() << endl;   // Should print 20, the new top element
  cout << st.size() << endl;  // Should print 2, the updated number of elements

  // Push more elements onto the stack
  st.push(30);  // Stack now: 10, 20, 30
  st.push(40);  // Stack now: 10, 20, 30, 40
  st.push(50);  // Stack now: 10, 20, 30, 40, 50

  // (Optional) Uncomment the following block if you want to print and empty the stack
  /*
  while (st.size() > 0) {
      cout << st.top() << " "; // Print the top element
      st.pop();                // Remove the top element
  }
  cout << endl;                // Move to a new line after printing all elements
  */

  // Initialize a temporary stack 'temp' to hold elements while printing
  stack<int> temp;

  // Print elements without permanently removing them from 'st'
  while (st.size() > 0) {
    cout << st.top() << " "; // Print the current top element of 'st'
    temp.push(st.top());     // Push it onto 'temp' to preserve it
    st.pop();                // Remove the top element from 'st'
  }
  cout << endl;

  // Display the top element of 'temp' after transferring elements from 'st'
  cout << temp.top() << endl; // Should print 50, the last element pushed to 'temp'

  // Restore the elements from 'temp' back to 'st' to maintain original order
  while (temp.size() > 0) {
    st.push(temp.top()); // Push the top element from 'temp' back to 'st'
    temp.pop();          // Remove the top element from 'temp'
  }

  // Print the final size and top element of 'st' to confirm restoration
  cout << st.size() << endl; // Should print 5, all elements restored
  cout << st.top() << endl;  // Should print 50, the top element of the restored stack

  return 0;
}
