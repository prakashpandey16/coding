#include<iostream>
using namespace std;

class Bike {
    public:
    int enginesize;  // Non-static data member to store the engine size of the bike
    int tyresize;    // Non-static data member to store the tire size of the bike

    // Constructor with an initializer list to initialize the non-static data members
    // The initializer list is a more efficient way to initialize members than using assignment in the constructor body
    Bike(int ts, int es) : tyresize(ts), enginesize(es) {}

    // Alternative way of initializing using the constructor body (commented out)
    // Bike(int tyresize, int enginesize)
    // {
    //     this ->enginesize = enginesize;
    //     this ->tyresize = tyresize;
    // }
};

int main() {
    // Creating an instance of Bike with specific properties for tvs
    Bike tvs(10, 150);
    // Accessing and printing the enginesize and tyresize for the tvs instance
    cout << tvs.enginesize << endl;  // Output: 150
    cout << tvs.tyresize << endl << endl;  // Output: 10

    // Creating another instance of Bike with specific properties for royalEnfield
    Bike royalEnfield(15, 350);
    // Accessing and printing the enginesize and tyresize for the royalEnfield instance
    cout << royalEnfield.enginesize << endl;  // Output: 350
    cout << royalEnfield.tyresize << endl;  // Output: 15

    return 0;
}
