#include<iostream>
using namespace std;
void swap(int &x, int &y)// Pass by reference
{
    int temp = x;
    x  = y;
    y = temp;
    return ;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}