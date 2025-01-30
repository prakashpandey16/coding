#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> mp;

    // Inserting elements using pair objects
    pair<string, int> p1("Prakash", 10);
    pair<string, int> p2("Rahul", 11);
    pair<string, int> p3("Jondo", 12);

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    // Inserting elements directly using the subscript operator
    mp["Anokh"] = 20;
    mp["Divya"] = 23;

    // Printing elements of the map
    cout << "Map elements before deletion:" << endl;
    for (const auto &p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Printing size of the map
    cout << "Size of map: " << mp.size() << endl;

    // Correct way to erase an element using key
    mp.erase("Jondo");

    // Printing elements of the map after deletion
    cout << "\nMap elements after deletion:" << endl;
    for (const auto &p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
