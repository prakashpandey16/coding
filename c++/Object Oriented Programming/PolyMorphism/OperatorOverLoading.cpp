#include<iostream>
using namespace std;

class complexNumber{
    public:
    int imaginary; // Public member variable to store the imaginary part of the complex number
    int real;      // Public member variable to store the real part of the complex number

    // Member function to add two complex numbers using a traditional method
    complexNumber add(complexNumber &c1)
    {
        complexNumber c3; // Create a new complexNumber object to store the result
        c3.imaginary = c1.imaginary + this->imaginary; // Add the imaginary parts
        c3.real = c1.real + this->real;                // Add the real parts
        return c3; // Return the resulting complexNumber object
    }

    // Overloading the '+' operator to add two complex numbers
    complexNumber operator +(complexNumber &c1)
    {
        complexNumber c3; // Create a new complexNumber object to store the result
        c3.imaginary = c1.imaginary + this->imaginary; // Add the imaginary parts
        c3.real = c1.real + this->real;                // Add the real parts
        return c3; // Return the resulting complexNumber object
    }

};

int main()
{
    complexNumber a1, b2;

    // Initialize the real and imaginary parts of the first complex number (a1)
    a1.imaginary = 10;
    a1.real = 5;

    // Initialize the real and imaginary parts of the second complex number (b2)
    b2.imaginary = 15;
    b2.real = 10;

    // Add the two complex numbers using the add() method
    complexNumber a3 = a1.add(b2);

    // Add the two complex numbers using the overloaded '+' operator
    complexNumber a4 = a1 + b2;

    // Output the result of the add() method
    cout << "Using add() method:" << endl;
    cout << "real -> " << a3.real << endl << "Imaginary -> " << a3.imaginary << endl;

    // Output the result of the overloaded '+' operator
    cout << "Using overloaded '+' operator:" << endl;
    cout << "real -> " << a4.real << endl << "Imaginary -> " << a4.imaginary << endl;
}

