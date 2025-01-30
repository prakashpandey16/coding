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
    for(int j=0; j<n; j++)
    {
        if(j%2==0)
        {
            for(int i=0; i<m; i++)
            {
                cout<<brr[i][j]<<" ";
            }
        }
        else {
            for(int i=m-1; i>=0; i--)
            {
                cout<<brr[i][j]<<" ";
            }
        }
    }
}