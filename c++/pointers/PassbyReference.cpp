#include<iostream>
using namespace std;
int swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}
int main()
{
    int a ,b;
    cout<<"Enter  first number :->";
    cin>>a;
     cout<<"Enter  second number :->";
    cin>>b;
    int* x = &a;
    int* y = &b;
    swap(a,b);
    cout<<a<<" "<<b;
    
    
    
}