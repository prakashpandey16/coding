#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter a number of rows :->";
    cin>>m;
    cout<<"Enter the number of column :->";
    cin>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 || i==4 || j==1 || j==6)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}