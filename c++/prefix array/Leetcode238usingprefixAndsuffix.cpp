#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int prefix[n];
    int p = arr[0];
    prefix[0] = 1;
    for(int i=0;i<n;i++)
    {
        prefix[i]=p;
        p*=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
   int suffix[n];
   suffix[n-1] = 1;
   p = arr[n-1];
   for(int i=n-2;i>=0;i--)
   {
    suffix[i] = p;
    p*=arr[i];
   }
   for(int i=0;i<n;i++)
    {
        cout<<suffix[i]<<" ";
    }
    cout<<endl;
   int result[n];
   for(int i=0;i<n;i++)
   {
    result[i] = prefix[i]*suffix[i];
   }
   for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
};