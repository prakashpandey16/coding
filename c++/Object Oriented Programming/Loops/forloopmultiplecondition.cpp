#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter a number :->";
    cin>>n1;
    int n2;
    cout<<"Enter a number :->";
    cin>>n2;
    for(int i=1 ,  j=1; i<=n1 && j<=n2;  i++ , j++  )
    {
        cout<<i<<" "<<endl;
        cout<<j<<" "<<endl;
    }
}