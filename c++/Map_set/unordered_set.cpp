#include<iostream>
#include<unordered_set>  // Including the unordered_set library
using namespace std;

int main()
{
    unordered_set<int> s; // Declaring an unordered set of integers

    // Inserting elements into the unordered set
    s.insert(1);
    s.insert(5);
    s.insert(10);
    s.insert(19);
    s.insert(31);
    s.insert(30);
    s.insert(10); // Duplicate elements are ignored in sets
    s.insert(19);
    s.insert(31);
    s.insert(33);

    // Printing the size of the set
    cout << "Size of set: " << s.size() << endl;

    // Printing elements of the set
    // Note: unordered_set stores elements in an unordered manner (random order)
    cout << "Elements of set: ";
    for (int ele : s)
    {
        cout << ele << " ";
    }
    cout << endl;

    // Removing an element (31) from the set
    s.erase(31);

    // Printing elements after deletion
    cout << "Elements after deleting 31: ";
    for (int ele : s)
    {
        cout << ele << " ";
    }
    cout << endl;

    int target = 30;

    // Checking if an element exists in the set or not
    if (s.find(target) != s.end())  // find() returns an iterator to the element if found, otherwise s.end()
        cout << "Exists" << endl;
    else 
        cout << "Not exists" << endl;

    return 0; // Indicating successful execution of the program
}
