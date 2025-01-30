#include<iostream>
using namespace std;
int main()
{
    int l,b,area,perimeter;
    cout << "enter length :";
         cin>> l;
    cout << "enter breadth :";
        cin>> b;
    cout << "The area of rectangle is :"; 
        area = l*b;
     cout << area<<endl;
         cout << "The perimeter of rectangle is :";
     perimeter = 2*(l+b);
        cout << perimeter<< endl;

    if(area>perimeter)
    {
        cout << "area is  greater then perimeter ";

    }
    else {
        cout << "area is greater then perimeter ";
    }
}