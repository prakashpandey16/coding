#include<iostream>
using namespace std;
void swap(int &a , int &b)
{
 int temp = 0;
 temp = a;
 a = b;
 b = temp;
 
}
int main()
{
    int a ,b;
    cout<<"Enter a number :->";
    cin>>a;
    cout<<"Enter a number :->";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;


}