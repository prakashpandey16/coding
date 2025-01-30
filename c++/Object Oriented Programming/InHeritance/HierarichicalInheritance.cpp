#include<iostream>
using namespace std;

// Base class 'vehicle'
class vehicle {
public:
    int enginesize;  // Engine size of the vehicle
    int tyresize;    // Tyre size of the vehicle
    int speed;       // Speed of the vehicle
};

// Derived class 'car' inheriting from base class 'vehicle'
// 'car' will inherit all public members (enginesize, tyresize, speed) from 'vehicle'
class car : public vehicle {
public:
    int steering;       // Steering attribute specific to cars
    int NnumberOfTyre;  // Number of tyres in the car
};

// Another derived class 'Bike' inheriting from base class 'vehicle'
// 'Bike' will also inherit all public members (enginesize, tyresize, speed) from 'vehicle'
class Bike : public vehicle {
    int handlesize;        // Handle size specific to bikes
    int sitting_capacity;  // Sitting capacity specific to bikes
};

int main() {
    // Creating an object 'Honda' of class 'car'
    car Honda;
    Honda.enginesize = 2000;  // Accessing and setting the inherited 'enginesize' from 'vehicle'

    // Creating an object 'Royal_enfield' of class 'Bike'
    Bike Royal_enfield;
    Royal_enfield.enginesize = 350;  // Accessing and setting the inherited 'enginesize' from 'vehicle'

    // Displaying the enginesize of both 'Honda' car and 'Royal_enfield' bike
    cout << Honda.enginesize << endl;
    cout << Royal_enfield.enginesize << endl;

    return 0;
}

