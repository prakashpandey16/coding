#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = false;
    for(int i=n-1;i>1;i--)
    {
        if(n%i==0) {
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"composite";
    else cout<<"prime";
}