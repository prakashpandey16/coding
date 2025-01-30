#include<iostream>
using namespace std;

// Base class representing a general vehicle
class vehicle { 
    public:
    int tyresize;   // Size of the tires, applicable to all vehicles
    int enginesize; // Size of the engine, applicable to all vehicles
};

// First derived class representing a car, inheriting from vehicle
class car : public vehicle { 
  public:
   int speed;           // Maximum speed of the car
   string company_name; // Name of the company that manufactures the car
};

// Second derived class representing a bike, inheriting from car
// This demonstrates multilevel inheritance, where Bike is derived from Car, which is derived from Vehicle
class Bike : public car { 
    public:
    int handlesize; // Size of the bike's handle
};

int main() {
    // Create an object of the Bike class representing a Royal Enfield bike
    Bike royalEnfield;

    // Assign values to the inherited members from vehicle and car classes
    royalEnfield.enginesize = 2000;         // Setting the engine size
    royalEnfield.tyresize = 18;             // Setting the tire size
    royalEnfield.speed = 200;               // Setting the speed
    royalEnfield.company_name = "RoyalEnfield"; // Setting the company name
    royalEnfield.handlesize = 5;            // Setting the handle size (specific to Bike)

    // Display the values of the bike's attributes
    cout << "Company Name: " << royalEnfield.company_name << endl; // Outputs the company name of the bike
    cout << "Engine Size: " << royalEnfield.enginesize << endl;    // Outputs the engine size of the bike
    cout << "Tire Size: " << royalEnfield.tyresize << endl;        // Outputs the tire size of the bike
    cout << "Speed: " << royalEnfield.speed << endl;               // Outputs the speed of the bike
    cout << "Handle Size: " << royalEnfield.handlesize << endl;    // Outputs the handle size of the bike

    return 0;
}
