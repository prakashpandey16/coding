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
    int arr[m][n];
    cout<<"Enter elements of 2D array :->";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int a;
    cout<<"Enter number of rows :->";
    cin>>a;
    int b;
    cout<<"Enter number of column :->";
    cin>>b;
    int brr[a][b];
    cout<<"Enter elements of 2D array :->";
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>brr[i][j];
        }
    }
    if(m==a && n==b)
    {
        int res[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                res[i][j] = arr[i][j] + brr[i][j];
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else {
        cout<<"Both matrices size is different :->";
        
    }
}