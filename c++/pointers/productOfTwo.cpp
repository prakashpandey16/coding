#include<iostream>
using namespace std;
int product(int* n1, int* n2)
{
    return (*n1 * *n2);
}
int main()
{
    int a,b;
    cout<<"Enter first number :->";
    cin>>a;
    cout<<"Enter second number :->";
    cin>>b;
    int* p1 = &a;
    int* p2 = &b;
    product(p1,p2);
    cout<<a*b;
    return 0;


}