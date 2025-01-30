#include<iostream>
using namespace std;

class vehicle
{
  public:
    int enginesize;  // 4 bytes (assuming int is 4 bytes)
    int tyresize;    // 4 bytes (assuming int is 4 bytes)

    // Virtual function show() in class vehicle
    // Declaring this function as virtual adds a vtable pointer to the class
    virtual void show() 
    {
        cout << "vehicle ka show!" << endl; 
    }
};

class Bike : public vehicle
{
  public:
    int handlesize;  // 4 bytes (assuming int is 4 bytes)

    // Overriding the show() function from class vehicle
    void show()
    {
        cout << "bike ka show!\n" << endl; // Message from Bike's show() function
    }
};

int main()
{
    vehicle a; // Object of class vehicle
    Bike b;    // Object of class Bike

    // Print the size of the vehicle object
    cout << sizeof(a) << endl; 
    // Before declaring the show function as virtual, the size of 'a' would be 8 bytes:
    // 4 bytes for enginesize and 4 bytes for tyresize.

    // After declaring the show function as virtual, an additional 4 or 8 bytes are added for the vtable pointer,
    // making the total size 12 bytes (assuming a 32-bit system) or 16 bytes (on a 64-bit system).

    // Print the size of the Bike object
    cout << sizeof(b) << endl << endl;
    // Before declaring the show function as virtual, the size of 'b' would be 12 bytes:
    // 4 bytes for enginesize, 4 bytes for tyresize, and 4 bytes for handlesize.

    // After declaring the show function as virtual in the base class vehicle, an additional vtable pointer is added
    // to both the vehicle and Bike objects, making the total size 16 bytes (assuming a 32-bit system) or more
    // on a 64-bit system.

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;

    return 0;
}

