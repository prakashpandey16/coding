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
        int correctidx = arr[i];
        if(arr[correctidx]==arr[i])
         cout<<arr[i];
         else swap(arr[i],arr[correctidx]);

    }
}