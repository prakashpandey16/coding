#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0) return 1;
    else if(b%2==0)//for even exponent
    {
       long long int result = power(a,b/2);
       return result * result ;
    }
    else {//for odd exponent
     long long int result = power(a,(b-1)/2);
     return a*result*result;

    }
}
int main()
{
    int a;
    cout<<"Enter base:->";
    cin>>a;
    int b;
    cout<<"Enter exponent :->";
    cin>>b;
    cout<<power(a,b);
}