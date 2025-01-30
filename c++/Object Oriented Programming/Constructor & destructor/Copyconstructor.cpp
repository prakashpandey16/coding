#include<iostream>
using namespace std;

class Bike {
    public:
        int tyresize;    // Member variable to store tire size
        int enginesize;  // Member variable to store engine size

        // Parameterized Constructor
        Bike(int tyresize, int enginesize) {
            this->tyresize = tyresize;
            this->enginesize = enginesize;
        }

        // Copy Constructor
        Bike(const Bike &obj) {
            // Copy the values of the member variables from the passed object
            this->tyresize = obj.tyresize;
            this->enginesize = obj.enginesize;
        }
};

int main() {
    // Create an object 'tvs' of class Bike
    Bike tvs(12, 150);

    // Create another object 'Hero' as a copy of 'tvs' using the copy constructor
    Bike Hero(tvs);

    // Output the engine size of the 'tvs' object
    cout << tvs.enginesize << endl;

    // Output the tire size of the 'tvs' object
    cout << tvs.tyresize << endl;

    // Output the tire size of the 'Hero' object
    cout << Hero.tyresize << endl;

    // Output the engine size of the 'Hero' object
    cout << Hero.enginesize << endl;

    return 0;
}
