#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter a number : ";
    cin>>m;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n;  j++)
        {
            cout<<(char)(96+j)<<" ";
        }
        cout<<endl;
    }

}