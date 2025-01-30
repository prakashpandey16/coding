#include<iostream>
using namespace std;
int oddsum(int n)
{
    if(n<=0) return 0;
    if(n%2==0)
    {
        n--;
    }
    return n + oddsum(n-2);
}
int main()
{
    int n;
    cout<<"Enter a number :->";
    cin>>n;
    cout<<oddsum(n);
}