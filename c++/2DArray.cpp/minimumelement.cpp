#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows :->";
    cin>>n;
    int m;
    cout<<"Enter number of column :->";
    cin>>m;
    int arr[m][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int mini = INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mini>arr[i][j])
           mini = arr[i][j];
        }
    }
    cout<<mini;
}