#include<iostream>
using namespace std;
// count N and product & sum of n number
int main()
{
    int n;
    cin>>n;
    // int count = 0;
    // while(n!=0)
    // {
    //     n/=10; count++;
    // }
    // cout<<count;
    int sum = 0;
    int product = 1;
    while(n!=0)
    {
        sum+=(n%10);
        product*=(n%10);
        n/=10;
    }
    cout<<sum<<endl<<product;
}
