#include<iostream>
using namespace std;

// Base class representing a general vehicle
class vehicle {
    public:
    int tyresize;       // Non-static data member for tire size
    int enginesize;     // Non-static data member for engine size
    int light;          // Non-static data member for lights (not used in this example)
    string companyName; // Non-static data member for the company's name

    // Default constructor
    vehicle() {
        cout << "vehicle constructor called" << endl;
    }
};
// Derived class representing a car, inheriting from vehicle
class car : public vehicle {
   public:
   int steeringsize; // Non-static data member for steering size

   // Default constructor
   car() {
       cout << "car constructor called" << endl;
   }
};

// Derived class representing a bike, inheriting from vehicle
class bike : public vehicle {
    public:
    int handlesize; // Non-static data member for handle size

    // Default constructor
    bike() {
        cout << "bike constructor called" << endl;
    }
};

int main() {
    // Creating an instance of car
    car honda;
    honda.tyresize = 18;          // Setting tire size for honda
    honda.enginesize = 2000;      // Setting engine size for honda
    honda.companyName = "Honda";  // Setting company name for honda
    honda.steeringsize = 2;       // Setting steering size for honda

    // Printing properties of honda
    cout << honda.companyName << endl;   // Output: Honda
    cout << honda.tyresize << endl;      // Output: 18
    cout << honda.enginesize << endl;    // Output: 2000
    cout << honda.steeringsize << endl;  // Output: 2

    // Creating an instance of bike
    bike tvs;
    tvs.companyName = "Tvs";    // Setting company name for tvs
    tvs.tyresize = 12;          // Setting tire size for tvs
    tvs.enginesize = 150;       // Setting engine size for tvs
    tvs.handlesize = 5;         // Setting handle size for tvs

    // Printing properties of tvs
    cout << tvs.companyName << endl;   // Output: Tvs
    cout << tvs.tyresize << endl;      // Output: 12
    cout << tvs.enginesize << endl;    // Output: 150
    cout << tvs.handlesize << endl;    // Output: 5

    return 0;
}
