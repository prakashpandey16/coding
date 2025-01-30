#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter a number of rows :->";
    cin>>m;
    cout<<"Enter a number of column :->";
    cin>>n;
    for(int i=1; i<=m; i++)
    {
        int j=1; 
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}