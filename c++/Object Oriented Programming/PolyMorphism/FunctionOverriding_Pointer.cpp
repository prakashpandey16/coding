#include<iostream>
using namespace std;

class vehicle
{
  public:
    int vehicle_ka_public; // Public member of class vehicle

    // Function show() in class vehicle
      virtual void show() 
    {
        cout << "vehicle ka show!" << endl; // Display message from class vehicle's show() function
    }
};

class Bike : public vehicle
{
  public:
    int bike_ka_public; // Public member of class Bike

    // Function show() in class Bike, overriding the show() function of class vehicle
    void show()
    {
        cout << "bike ka show!" << endl; // Display message from class Bike's show() function
    }
};

int main()
{ 
    // Create an object of type Bike
    Bike b;

    // Declare a pointer of type vehicle
    vehicle *a; 

    // Point the vehicle pointer 'a' to the object 'b' of type Bike
    a = &b;

    // Use the pointer to call the show() function
    // Even though 'a' is a pointer of type vehicle, it points to a Bike object
    // Since the show() function is not marked as virtual in the base class (vehicle),
    // the function from the base class (vehicle) will be called, not the one from Bike.
    a->show(); // This will call vehicle's show() due to the absence of a virtual function
    // if we declare A ke show ko virtual then it is print bike ka show

    return 0;
}


