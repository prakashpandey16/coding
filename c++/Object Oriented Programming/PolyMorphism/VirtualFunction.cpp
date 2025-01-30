#include<iostream>
using namespace std;

class vehicle
{
  public:
    int vehicle_ka_public; // Public member of class vehicle

    // Virtual function show() in class vehicle
    virtual void show() 
    {
        cout << "vehicle ka show!" << endl; // Message from vehicle's show() function
    }
};

class Bike : public vehicle
{
  public:
    int bike_ka_public; // Public member of class Bike

    // Overriding the show() function from class vehicle
    void show()
    {
        cout << "bike ka show!\n" << endl; // Message from Bike's show() function
    }
};

class car : public Bike 
{
  public:
    int car_ka_public; // Public member of class car

    // Overriding the show() function from class Bike
    void show()
    {
        cout << "car ka show!" << endl; // Message from car's show() function
    }
};

int main()
{
    // Compiler's point of view: 'a' is a pointer to 'vehicle' type
    // Compile-time binding: The compiler knows 'a' is of type 'vehicle*'
    // Runtime binding: Due to 'virtual' keyword, the correct function is chosen at runtime

    vehicle *a; // Base class pointer

    // Point the vehicle pointer 'a' to a new Bike object
    a = new Bike;

    // Dynamic binding occurs here
    // Even though 'a' is a vehicle pointer, it points to a Bike object
    // Because 'show()' is virtual, the Bike's show() is called
    a->show(); // Output: "bike ka show!"
    cout << endl;

    // Point the vehicle pointer 'a' to a new vehicle object
    a = new vehicle;

    // Now 'a' points to a vehicle object
    // The vehicle's show() function is called
    a->show(); // Output: "vehicle ka show!"
    cout << endl;

    // Declare a pointer of type Bike
    Bike *b;

    // Point the Bike pointer 'b' to a new car object
    // Since car is derived from Bike, this is allowed
    b = new car;

    // Dynamic binding occurs here
    // Even though 'b' is a Bike pointer, it points to a car object
    // Because 'show()' is virtual and overridden in car, car's show() is called
    b->show(); // Output: "car ka show!"

    return 0;
}

