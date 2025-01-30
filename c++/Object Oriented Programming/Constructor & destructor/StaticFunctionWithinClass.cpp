#include<iostream>
using namespace std;

class Bike {
    public:
    // Static data member to keep track of the total number of bikes
    // Static members are shared across all instances of the class
    static int numberofbikes;
    
    // Non-static data members to store properties specific to each bike instance
    int enginesize;
    int tyresize;

    // Constructor to initialize the non-static data members
    Bike(int tyresize, int enginesize) {
        this->enginesize = enginesize;
        this->tyresize = tyresize;
    }

    // Static member function to increment the number of bikes
    // Static functions can only access static data members
    static void increasenoOfbikes() {
        numberofbikes++;
    }
};

// Initialize the static member 'numberofbikes' outside the class
// This step is necessary for static members
int Bike::numberofbikes = 10;

int main() {
    // Creating an instance of Bike with specific properties
    Bike tvs(10, 150);

    // Call the static function using the object
    // This increments the static member 'numberofbikes'
    tvs.increasenoOfbikes();
    cout << tvs.numberofbikes << endl; // Output: 11

    // Creating another instance of Bike with different properties
    Bike royalEnfield(15, 350);
    
    // Call the static function using another object
    // This again increments the static member 'numberofbikes'
    royalEnfield.increasenoOfbikes();
    cout << royalEnfield.numberofbikes << endl; // Output: 12

    // Static member functions can also be called directly using the class name
    Bike::increasenoOfbikes();
    cout << royalEnfield.numberofbikes << endl; // Output: 13
    cout << tvs.numberofbikes << endl; // Output: 13

    return 0;
}

