#include<iostream>
using namespace std;

// Base class A
class A
{ 
  private:
    int a_ka_private;  // Private member of class A, not accessible outside this class

  public:
    int a_ka_public;   // Public member of class A, accessible to derived classes
};

// Class B virtually inherits from class A
class B : virtual public A
{
  public:
    int b_ka_public;  // Public member of class B
};

// Class C virtually inherits from class A
class C : virtual public A
{
  public:
    int c_ka_public;  // Public member of class C
};

// Class D inherits from both B and C
class D : public B, public C
{
  public:
    int d_ka_public;  // Public member of class D

    // Function to display the value of a_ka_public
    void show()
    {
      cout << a_ka_public;  // Accessing the a_ka_public from class A
    }
};

int main()
{
  D d;
  d.a_ka_public = 10;  // Setting the value of a_ka_public in the derived object
  d.show();  // Displaying the value of a_ka_public
  cout << endl;

  return 0;
}
//Diamond Problem and Virtual Inheritance:

// The diamond problem arises when a class (D in this case) inherits
//  from two classes (B and C) that both inherit from a common base class (A). 
//  Without virtual inheritance, the class D would have two copies of the members of A, leading to ambiguity.
// Virtual inheritance solves this problem by ensuring that
//  only one copy of A's members exists in D, even though D inherits from both B and C.