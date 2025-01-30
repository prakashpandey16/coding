#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a number : ";
    cin>>m;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*" <<" ";
        }
        cout<<endl;
    }

}