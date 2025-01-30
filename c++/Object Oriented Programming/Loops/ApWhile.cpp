#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // 2 4 6 8 10.....
    int a=2;
    int i=1; 
    while(i<=n)
    {
        cout<<a<< endl;
        a = a+2;
        i++;

    }
}