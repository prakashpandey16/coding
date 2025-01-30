#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin>> n;
    // 4 8 12 16 ....
    int a = 4;
    for(int i = 1; i<=n; i++ )
    {
        cout << a <<endl;
        a = a+4;
    }
}