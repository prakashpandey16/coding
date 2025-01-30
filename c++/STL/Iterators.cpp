#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Vector normal iterations
    // Declaring and initializing a vector of integers
    vector<int> v = {1, 2, 3, 4, 5};
    
    // Iterating over the vector using a simple for loop (index-based iteration)
    for(int i = 0; i < v.size(); i++)  // Using v.size() to avoid hardcoding the size
    {
        cout << v[i] << " ";  // Accessing elements using the [] operator
    }
    cout << endl;  // Newline after printing all elements

    // Vector iterators
    // Declaring and initializing another vector of integers
    vector<int> arr = {1, 2, 3, 5, 6, 7};
    
    // Declaring an iterator for the vector
    vector<int>::iterator it;
    
    // Iterating over the vector using an iterator
    for(it = arr.begin(); it != arr.end(); it++)  // Iterator-based loop
    {
        cout << (*it) << " ";  // Dereferencing the iterator to access the value
    }
    cout << endl;  // Newline after printing all elements

    // Vector of pairs
    // Declaring and initializing a vector of pairs (each pair contains two integers)
    vector<pair<int,int>> brr = {{1, 2}, {5, 6}, {8, 9}};
    
    // Declaring an iterator for the vector of pairs
    vector<pair<int,int>> :: iterator i;
    
    // Iterating over the vector of pairs using the iterator
    for(i = brr.begin(); i != brr.end(); i++)  // Iterator-based loop for vector of pairs
    {
        // Accessing the first and second elements of the pair using the dot operator
        cout << (*i).first << " " << (*i).second << endl;
    }
    cout << endl;

    // Another way to access elements of the pair using arrow operator (->)
    for(i = brr.begin(); i != brr.end(); i++)  // Same loop as above
    {
        // Using the arrow operator to directly access the pair elements
        cout << (i->first) << " " << (i->second) << endl;
    }

    return 0;  // Returning 0 to indicate successful execution
}
