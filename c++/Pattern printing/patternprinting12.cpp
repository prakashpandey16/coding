#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a rows :->";
    cin>>m;
    for(int i =1; i<=m; i++)
    {
        int a =1;
        for(int j=1; j<=m; j++)
        {
            if(i>=j)
            {
            if(i%2!=0)
            {
                cout<<a++<<" ";
            }
            if(i%2==0)
            {
              cout<<char(64+j)<<" ";
            }

            }
        }

        
        cout<<endl;
    }
}