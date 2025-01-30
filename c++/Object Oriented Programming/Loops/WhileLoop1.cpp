#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number : ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        if(n%2==0)
        {
        cout <<"even number";
        break;
        }
        else{
                cout << "Odd number ";
                break;
        }
        i++;
    }
}