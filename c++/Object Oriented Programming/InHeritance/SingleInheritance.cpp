#include<iostream>
using namespace std;

// Base class representing a general vehicle
class vehicle { 
    public:
    int tyresize;   // Size of the tires, applicable to all vehicles
    int enginesize; // Size of the engine, applicable to all vehicles
};

// Derived class representing a specific type of vehicle, i.e., a car
// This is an example of single inheritance, where the car class inherits from the vehicle class
class car : public vehicle {
  public:
   int speed;        // Maximum speed of the car
   int streeing_size; // Size of the steering wheel
};

int main() {
    car honda; // Create an object of the car class representing a Honda car

    // Assign values to the inherited members from the vehicle class
    honda.enginesize = 2000;  // Setting the engine size for the Honda car
    honda.tyresize = 18;      // Setting the tire size for the Honda car
    
    // Assign values to the members of the car class
    honda.streeing_size = 2;  // Setting the steering wheel size for the Honda car
    honda.speed = 200;        // Setting the speed for the Honda car

    // Display the values of the car's attributes
    cout << honda.enginesize << endl;   // Outputs the engine size of the car
    cout << honda.tyresize << endl;     // Outputs the tire size of the car
    cout << honda.speed << endl;        // Outputs the speed of the car
    cout << honda.streeing_size << endl;// Outputs the steering wheel size of the car

    return 0;
}
