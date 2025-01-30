#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of elements

    // Vector of pairs
    // Uncomment this section if you want to use it
    /*
    vector<pair<int, int>> v = {{2, 3}, {4, 5}, {6, 7}};  // Example initialization
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;  // Read pairs of integers
        v.push_back({x, y});  // Add pair to vector
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;  // Print pairs
    }
    */

    // Array of vectors
    // Uncomment this section if you want to use it
    /*
    vector<int> v[n];  // Declare an array of vectors
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;  // Read the number of elements in the i-th vector
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;  // Read an integer
            v[i].push_back(x);  // Add integer to the i-th vector
        }
    }
    cout << "\n\n\n";  // Print new lines for separation

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";  // Print elements of the i-th vector
        }
        cout << endl;  // Print new line after each vector
    }
    */

    // 2D vector
    vector<vector<int>> v;  // Declare a 2D vector
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;  // Read the number of elements in the i-th row
        vector<int> temp;  // Temporary vector for the i-th row
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;  // Read an integer
            temp.push_back(x);  // Add integer to the temporary vector
        }
        v.push_back(temp);  // Add the temporary vector to the 2D vector
    }

    // Print the 2D vector
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";  // Print elements of the i-th row
        }
        cout << endl;  // Print new line after each row
    }

    return 0;
}
