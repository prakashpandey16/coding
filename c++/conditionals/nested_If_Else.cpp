#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter 1st number :";
    cin >> a;
     cout << "Enter 2nd number :";
     cin>>b;
      cout << "Enter 3rd number :";
      cin>>c;
      if(a>b)
      {
        if(a>c)
        cout<<a<<" is greatest";
        else cout << c<<" is geatest";
      }
      else if(b>a)
      {
        if(b>c)
        cout <<b<<" is greatest ";
        else cout<< c<< " is greatest ";
      }
      else cout<< "All are equal";
}