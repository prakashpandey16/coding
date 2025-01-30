#include<iostream>
using namespace std;

// Function to calculate the area of a rectangle
// Takes two integer parameters representing the sides of the rectangle
void calculate_area(int a, int b) {
    cout << (a * b) << endl;  // Output: Area of the rectangle
}

// Function to calculate the area of a square
// Takes one integer parameter representing the side of the square
void calculate_area(int s) {
    cout << (s * s) << endl;  // Output: Area of the square
}

// Function to calculate the area of a circle
// Takes one integer parameter for the radius and an optional double parameter for π
// Default value for π is 3.1427
void calculate_area(double r, double pi = 3.1427) {
    cout << (pi * r * r) << endl;  // Output: Area of the circle
}

int main() {
    calculate_area(10, 20);  // Calls the rectangle area function
    calculate_area(14);      // Calls the square area function
    calculate_area(15);    // Calls the circle area function with default π value

    return 0;
}

