#include<iostream>
using namespace std;

// Function that demonstrates a regular local variable
void print()
{
    // 'a' is a regular local variable, initialized to 10 each time the function is called
    int a = 10;
    cout << a << endl; // Prints the value of 'a'
    a++; // Increments 'a' but this increment has no effect outside this function call
}

// Function that demonstrates a static local variable
void print_Static()
{
    // 'a' is a static local variable, initialized to 10 only once
    // This initialization happens only during the first call to the function
    static int a = 10;
    cout << a << endl; // Prints the value of 'a'
    a++; // Increments 'a', and this change persists across function calls
}

int main()
{
    // Calls the 'print' function three times
    print(); // Output: 10
    print(); // Output: 10
    print(); // Output: 10

    // Each time 'print' is called, the local variable 'a' is reinitialized to 10,
    // so it always prints 10 regardless of the previous calls.

    // Calls the 'print_Static' function three times
    print_Static(); // Output: 10
    print_Static(); // Output: 11
    print_Static(); // Output: 12

    // The static variable 'a' in 'print_Static' retains its value between function calls,
    // so the output increases with each call.
}
