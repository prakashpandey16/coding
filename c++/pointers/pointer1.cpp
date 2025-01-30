#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    int* ptr = &x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<x<<endl;
}