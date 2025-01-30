#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Declare a vector of integers and initialize it with values from 1 to 6
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // Iterating through the vector 'arr' using a range-based for loop
    for(int i : arr)
    {
        // Printing each element of the vector followed by a space
        cout << i << " ";
    }
    // Print a new line after the loop completes
    cout << endl;

    // Declare an array 'brr' of integers and initialize it with values
    int brr[] = {1, 2, 3, 4, 5, 6, 6};

    // Iterating through the array 'brr' using a range-based for loop with 'auto' keyword
    // 'auto' automatically deduces the type of 'j' based on the elements of 'brr'
    for(auto j : brr)
    {
        // Printing each element of the array followed by a space
        cout << j << " ";
    }
    // Print a new line after the loop completes
    cout << endl;

    // Declare a vector of pairs of integers and initialize it with pairs (5,6), (7,8), (9,10)
    vector<pair<int, int>> v_p = {{5, 6}, {7, 8}, {9, 10}};

    // Iterating through the vector of pairs 'v_p' using a range-based for loop
    for(auto it : v_p)
    {
        // Accessing and printing the first and second values of each pair
        cout << it.first << " " << it.second << endl;
    }
}
