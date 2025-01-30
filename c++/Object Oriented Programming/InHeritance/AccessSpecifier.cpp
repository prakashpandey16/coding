#include<iostream>
using namespace std;

class A {
   private:
    int a_ka_private; // Private member: Cannot be accessed from outside the class or inherited.

   protected:
    int a_ka_protected; // Protected member: Cannot be accessed from outside the class, but can be inherited by derived classes.

   public:
    int a_ka_public; // Public member: Can be accessed from outside the class and can be inherited.

   // Note: We can downgrade access (e.g., public to protected) when inheriting, but we cannot upgrade (e.g., private to public).
   // Inheritance modes:
   // 1. Public Inheritance: Public members remain public, protected members remain protected.
   // 2. Protected Inheritance: Public members become protected.
   // 3. Private Inheritance: Public and protected members become private.
};

class B : public A { 
    // Public inheritance: 
    // - Public members of class A become public in class B.
    // - Protected members of class A remain protected in class B.
    public:
    int b_ka_public; // Public member of class B.
    
    void show() {
        a_ka_public;    // OK: a_ka_public is inherited as public, can be accessed inside class B.
        a_ka_protected; // OK: a_ka_protected is inherited as protected, can be accessed inside class B.
        // a_ka_private; // ERROR: a_ka_private is private in class A, cannot be accessed or inherited.
    }
};

int main() {
    A a;
    // a.a_ka_private = 10; // ERROR: a_ka_private is private in class A, cannot be accessed outside the class.
    // a.a_ka_protected = 15; // ERROR: a_ka_protected is protected in class A, cannot be accessed outside the class.
    a.a_ka_public = 15; // OK: a_ka_public is public in class A, can be accessed outside the class.
    cout << a.a_ka_public << endl;

    B b;
    b.b_ka_public = 10; // OK: b_ka_public is public in class B, can be accessed outside the class.
    cout << b.b_ka_public << endl;

    b.a_ka_public = 15; // OK: a_ka_public is inherited as public in class B, can be accessed outside the class.
    cout << b.a_ka_public << endl;

    // b.a_ka_private; // ERROR: a_ka_private is private in class A, cannot be accessed in class B.
    // b.a_ka_protected; // ERROR: a_ka_protected is protected in class A, cannot be accessed outside class B.

    return 0;
}
