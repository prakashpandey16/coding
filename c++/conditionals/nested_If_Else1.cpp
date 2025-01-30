#include<iostream>
using namespace std;
int main()
{
    int a,r,s;
    cout << "Enter age of ajay :";
    cin>>a;
    cout << "Enter age of Ram :";
    cin>>r;
    cout << "Enter age of Shyam :";
    cin>>s;
    if (a<r)
    {
        if(a<s)
        cout<< "ajay is youngest among them";
        else cout << "shyam is youngest  among them";
    }
    else if(r<a)
    {
        if(r>s)
        cout << "Ram is youngest among them ";
        else cout << " shyam is youngest among them ";
    }
    else cout << "All is greatest";

    
}