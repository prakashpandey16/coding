#include <iostream>
using namespace std;

class Bike {
public:
    int tyresize;  // Data member to store tire size

    // Default constructor
    Bike() {
        // This constructor is called automatically when an object of the Bike class is created
        cout << "Constructor called!" << endl;
    }
};

int main() {
    // Creating objects of the Bike class
    Bike tvs;           // Default constructor is called here for 'tvs'
    Bike royalEnfield;  // Default constructor is called here for 'royalEnfield'

    // At this point, the default constructor is executed for each object creation,
    // and the message "Constructor called!" is printed twice.

    return 0;


}
// Use of Default Constructor
// What is a Default Constructor? A default constructor is a constructor that takes no arguments. 
// It is automatically called when an object is created. 
// In the code above, the Bike class has a default constructor that prints a message when called.

// When is the Default Constructor Called? In the main() function, 
// two objects of the Bike class (tvs and royalEnfield) are created.
//  When each object is created, the default constructor is automatically called
//  resulting in the message "Constructor called!" being printed twice.


