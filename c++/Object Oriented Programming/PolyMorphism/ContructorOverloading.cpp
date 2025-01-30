#include<iostream>
using namespace std;

class Bike {
    public:
    int enginesize;  // Non-static data member to store the engine size of the bike
    int tyresize;    // Non-static data member to store the tire size of the bike

    // Constructor with two parameters to initialize both enginesize and tyresize
    // The initializer list is used for efficient initialization
    Bike(int ts, int es) : tyresize(ts), enginesize(es) {}

    // Constructor with one parameter to initialize only tyresize
    // enginesize is given a default value of 200
    Bike(int ts) : tyresize(ts), enginesize(200) {}

    // Default constructor to initialize both members with default values
    // tyresize is set to 12 and enginesize is set to 400
    Bike() : tyresize(12), enginesize(400) {}
};

int main() {
    // Creating an instance of Bike with specific properties for tvs
    Bike tvs(10, 150);
    // Accessing and printing the enginesize and tyresize for the tvs instance
    cout << tvs.enginesize << endl;  // Output: 150
    cout << tvs.tyresize << endl << endl;  // Output: 10

    // Creating another instance of Bike with specific properties for royalEnfield
    Bike royalEnfield(15, 350);
    // Accessing and printing the enginesize and tyresize for the royalEnfield instance
    cout << royalEnfield.enginesize << endl;  // Output: 350
    cout << royalEnfield.tyresize << endl<<endl;  // Output: 15

    // Creating an instance of Bike with one parameter for bajaj
    // Only tyresize is initialized (12), enginesize is set to default (200)
    Bike bajaj(12);
    cout << bajaj.tyresize << endl;  // Output: 12
    cout << bajaj.enginesize << endl<<endl;  // Output: 200

    // Creating an instance of Bike with no parameters for Hero
    // Both tyresize and enginesize are initialized with default values (12 and 400 respectively)
    Bike Hero;
    cout << Hero.tyresize << endl;  // Output: 12
    cout << Hero.enginesize << endl;  // Output: 400

    return 0;
}
