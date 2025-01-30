#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter number of rows :->";
    cin>>m;
    int n;
    cout<<"Enter number of column :->";
    cin>>n;
    int brr[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>brr[i][j];
        }
    }
    for(int i=m-1; i>=0; i--)
    {
        if(i%2==0)
        {
            for(int j=n-1; j>=0; j--)
            {
                cout<<brr[i][j]<<" ";
            }
        }
        else {
            for(int j=0; j<n; j++)
            {
                cout<<brr[i][j]<<" ";
            }
        }
    }
}