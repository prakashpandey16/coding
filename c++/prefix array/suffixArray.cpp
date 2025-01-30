#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,5,3,2,7,6};
      int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-2;i>=0;i--)
    {
       arr[i]+=arr[i+1];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}