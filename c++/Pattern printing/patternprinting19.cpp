#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows :->";
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        int a = 1;
        for(int j=1; j<=i; j++)
        {
            if((i+j)%2==0)
            {
                cout<<a++<<" ";
                
            }
            if((i+j)%2!=0) {
                cout<<char(64+j)<<" ";
            }
        }
        cout<<endl;
    }
}