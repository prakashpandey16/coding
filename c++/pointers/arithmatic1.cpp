#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int* p = &n;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;// this is print a garbage value
}