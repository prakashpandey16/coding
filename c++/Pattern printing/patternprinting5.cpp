#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter a number of rows :->";
    cin>>m;
    cout<<"Enter a number of column :->";
    cin>>n;
    int i =1; 
    while(i<=m)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<i<<" ";

        }
        i++;
        cout<<endl;
    }
}