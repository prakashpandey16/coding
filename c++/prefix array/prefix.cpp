#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    int p = 1;
    prefix[0]=p;
    for(int i=1;i<n;i++)
    {
       p *=arr[i-1];
       prefix[i]=p;

    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<prefix[i]<<" ";
    // }
    int suffix[n];
     p = 1;
    suffix[n-1] = 1;
    for(int i=n-2;i>=0;i--)
    {
        p*=arr[i+1];
        suffix[i]=p;
    }
    for(int i=0;i<n;i++)
    {
        cout<<suffix[i]<<" ";
    }
    
}