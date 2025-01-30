#include<iostream>
using namespace std;

class vehicle
{
    public:
    // Non-virtual function in base class
    void show()
    {
        cout << "vehicle ka show!" << endl; // Displays a message from the base class vehicle
    }

    // Pure virtual function, making vehicle an abstract class
    virtual void calculateMileage() = 0;
    // Pure virtual function, making vehicle an abstract class
    virtual void refuel() = 0;
    // Both functions must be overridden in any non-abstract derived class
};

class Bike : public vehicle
{
   public:
   int handlesize; // Public member of class Bike

   // Implementation of the pure virtual function calculateMileage()
   void calculateMileage()
   { 
       cout << "calculate mileage" << endl; // Displays a message indicating mileage calculation
   }

   // Implementation of the pure virtual function refuel()
   void refuel()
   {
       cout << "Refuel" << endl; // Displays a message indicating the refuel process
   }
};

int main()
{
    Bike b; // Create an object of the derived class Bike
    b.calculateMileage(); // Calls the overridden calculateMileage() function in the Bike class
    b.refuel(); // Calls the overridden refuel() function in the Bike class
}
