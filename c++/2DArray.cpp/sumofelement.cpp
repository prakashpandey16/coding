#include<iostream>
#include<climits>
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
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]>max)
           max = arr[i][j];
        }
    }
    cout<<max;
}