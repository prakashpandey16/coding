#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    while(i<n)
    {
        if(arr[i]<=0) i++;
        else if(arr[i]>n || arr[arr[i]-1]==arr[i]|| arr[i]==i+1) i++;
        else swap(arr[i],arr[arr[i-1]]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        { cout<<i+1;
           break;
        }

    }
    // cout<<n+1
    //[7,8,9,11,12
}