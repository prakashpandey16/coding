#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration and initialization of a pair with two integers
    pair<int, int> p = {1, 2};
    
    // Output the first and second elements of the pair 'p'
    cout << p.first << " " << p.second << endl;

    // Declaration of a pair with an integer and a string
    pair<int, string> a;
    
    // Input values for the first and second elements of the pair 'a'
    cin >> a.first;  // Input the integer part
    cin >> a.second; // Input the string part
    
    // Output the first and second elements of the pair 'a'
    cout << a.first << " " << a.second << endl;

    // Declaration of an array of pairs with 3 elements
    // Note: Each pair should only have two elements (first and second)
    pair<int, int> arr[3] = {{1, 2}, {4, 5}, {7, 8}};
    
    // Loop to output the elements of the array of pairs
    for (int i = 0; i < 3; i++)
    {
        // Output the first and second elements of each pair in the array
        cout << arr[i].first << " " << arr[i].second<< endl;
    }

    return 0;
}
