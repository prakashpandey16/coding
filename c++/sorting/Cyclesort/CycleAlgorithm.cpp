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
    //cycle sort
    int i=0;
    while(i<n)
    {
        int correctidx = arr[i]-1;
        if(i==correctidx) i++;
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}