#include<iostream>
#include<climits>
using namespace std;
int maximum(int arr[],int n)
{ 
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(max <= arr[i]) max = arr[i];
        return max;
    }
}
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
    cout<<maximum(arr,n);
}
