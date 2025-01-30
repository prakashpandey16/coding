#include <iostream>
using namespace std;

class Bike {
public:
    int tyresize;    // Data member to store tire size
    int enginesize;  // Data member to store engine size

    // Parameterized constructor
    Bike(int tyresize, int enginesize) {
        // 'this' pointer is used to differentiate between
        // the class members and the parameters passed to the constructor
        this->tyresize = tyresize;
        this->enginesize = enginesize;
    }
};

int main() {
    // Creating objects of the Bike class using the parameterized constructor
    Bike tvs(20, 150);            // The constructor is called with tyresize = 20 and enginesize = 150
    Bike royalEnfield(20, 350);   // The constructor is called with tyresize = 20 and enginesize = 350

    // Accessing and printing the attributes of the tvs object
    cout << "TVS Bike Details:" << endl;
    cout << "Tyre Size: " << tvs.tyresize << endl;         // Outputs: 20
    cout << "Engine Size: " << tvs.enginesize << endl;     // Outputs: 150
    cout << endl;

    // Accessing and printing the attributes of the royalEnfield object
    cout << "Royal Enfield Bike Details:" << endl;
    cout << "Tyre Size: " << royalEnfield.tyresize << endl; // Outputs: 20
    cout << "Engine Size: " << royalEnfield.enginesize << endl; // Outputs: 350

    return 0;
}

// Use of Parameterized Constructor
// What is a Parameterized Constructor
// A parameterized constructor is a constructor that takes 
// arguments to initialize an object with specific values. 
// In this code, the Bike class has a parameterized constructor
// that accepts tyresize and enginesize as parameters.

// When is the Parameterized Constructor Called? 
// In the main() function, two objects of the Bike class (tvs and royalEnfield) 
// are created using the parameterized constructor. 
// The values passed during the creation of these objects 
// are used to initialize the tyresize and enginesize attributes of the respective objects.