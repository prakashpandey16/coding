#include<iostream>
using namespace std;
// This example illustrates how function overriding works in C++ 
// and how you can use the scope resolution operator to access 
// the base class's version of the function.

class A
{
  public:
    int a_ka_public; // Public member of class A

    // Function show() in class A
    void show()
    {
        cout << "A ka show!" << endl; // Display message from class A's show() function
    }
};

class B : public A
{
  public:
    int b_ka_public; // Public member of class B

    // Function show() in class B, overriding the show() function of class A
    void show()
    {
        cout << "B ka show!" << endl; // Display message from class B's show() function
    }
};

int main()
{
    A a;
    a.show(); // Calls class A's show() function
    cout << endl;

    B b;
    b.show(); // Calls the overridden show() function in class B
    cout << endl;

    // Explicitly calling class A's show() function using the scope resolution operator
    b.A::show(); 
}
 