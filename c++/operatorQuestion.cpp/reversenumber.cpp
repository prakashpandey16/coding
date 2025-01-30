#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :->";
    cin>>n;
    int rev = 0;
    while(n>0)
    {
       int ld = n%10;
       rev*=10;
       rev+=ld;
       n/=10;
    }
    cout<<rev;

}