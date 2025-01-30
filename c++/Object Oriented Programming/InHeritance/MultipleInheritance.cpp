#include<iostream>
using namespace std;

// Base class A
class A {
   private:
    int a_ka_private; // Private member, cannot be accessed or inherited

   protected:
    int a_ka_protected; // Protected member, cannot be accessed outside the class but can be inherited

   public:
    int a_ka_public; // Public member, can be accessed and inherited
    // Constructor for class A
    A() {
        cout << "Constructor called for A" << endl;
    }
};

// Base class B
class B {
   public:
    int b_ka_public; // Public member of class B
    // Constructor for class B
    B() {
        cout << "Constructor called for B" << endl;
    }
};

// Derived class C inheriting from both A and B (Multiple Inheritance)
class C : public A, public B {
   public:
    int c_ka_public; // Public member of class C
    // Constructor for class C
    C() {
        cout << "Constructor called for C" << endl;
    }
};

int main() {
    // Creating an object of class C
    // This will automatically call the constructors of A, B, and C in that order
    C c;
    c.c_ka_public; // Accessing the public member of class C

    return 0;
}
