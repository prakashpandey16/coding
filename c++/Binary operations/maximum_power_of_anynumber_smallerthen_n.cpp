#include<iostream>
using namespace std;
int maximum_power_of_anynumber_smallerthen_n(int n)
{
    int temp;
    while(n>0)
    {
        temp = n;// it intialize last term to n which is our maximum power
        n =(n & (n-1));
    }
    return temp;
}
int maximum_poweR_of2s(int n)
{
    n = n|(n>>1);
    n = n|(n>>2);
    n = n|(n>>4);
    n = n|(n>>8);
    n = n|(n>>16);
    return (n+1)>>1;// ==(n+1)/2
}
int main()
{
    cout<<maximum_power_of_anynumber_smallerthen_n(100)<<endl;
    cout<<maximum_poweR_of2s(100);
}
