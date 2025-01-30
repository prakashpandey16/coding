#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter 1st number :";
    cin>> a;
    cout << "Enter 2nd  number :";
    cin>>b;
    cout << "Enter 3rd number :";
    cin>>c;
    if(a>b && a>c)
        cout << a << " is gretest ";
    else if (b>a && b>c)
        cout << b << " is gretest ";
    else if (c>a && c>b)
        cout << c << " is gretest ";
        else 
        cout << "All are Equal";

}