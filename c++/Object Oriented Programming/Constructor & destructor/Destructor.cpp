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

    // Destructor
    ~Bike() {
        // Destructor is called automatically when an object goes out of scope
        cout << "Destructor called!" << endl;
    }
};

int main() {
    // Creating objects of the Bike class using the parameterized constructor
    Bike tvs(20, 150);            // The constructor is called with tyresize = 20 and enginesize = 150
    Bike royalEnfield(20, 350);   // The constructor is called with tyresize = 20 and enginesize = 350

    bool flag = true;
    if (flag == true) {
        // A new object bmw is created inside this block
        Bike bmw(20, 1000);  // The constructor is called with tyresize = 20 and enginesize = 1000

        // Accessing and printing the attributes of the bmw object
        cout << "BMW Bike Details:" << endl;
        cout << "Tyre Size: " << bmw.tyresize << endl;          // Outputs: 20
        cout << "Engine Size: " << bmw.enginesize << endl<<endl;      // Outputs: 1000

        // The bmw object goes out of scope here, so the destructor is called
    }

    // Accessing and printing the attributes of the tvs object
    cout << "TVS Bike Details:" << endl;
    cout << "Tyre Size: " << tvs.tyresize << endl;              // Outputs: 20
    cout << "Engine Size: " << tvs.enginesize << endl;          // Outputs: 150
    cout << endl;

    // Accessing and printing the attributes of the royalEnfield object
    cout << "Royal Enfield Bike Details:" << endl;
    cout << "Tyre Size: " << royalEnfield.tyresize << endl;     // Outputs: 20
    cout << "Engine Size: " << royalEnfield.enginesize << endl; // Outputs: 350

    // Destructors for tvs and royalEnfield are called here as they go out of scope
    return 0;
}
