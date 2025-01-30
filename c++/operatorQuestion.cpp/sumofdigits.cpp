#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :->";
    cin>>n;
    int sum = 0;
    while(n>0)
    {
        int ld;
        ld = n%10;
        n/=10;
        sum+=ld;
    }
    cout<<sum;
}