#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array :->";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array :->";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int count = 0, x = 5;
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i] > x) count++;
    }
    cout<<count;
}