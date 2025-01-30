#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number :";
    cin>> n;
    if (n>99 && n<1000)
    cout << "It is a three digit number :";
    else {
        cout << "It is not a three digit number :";
    }
}