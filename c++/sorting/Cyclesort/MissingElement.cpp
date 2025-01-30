#include<iostream>
#include<vector>
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
    // method 1
    vector<bool>check(n+1,false);
    // for(int i=0;i<n;i++)
    // {
    //     int ele = arr[i];
    //     check[ele] = true;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     if(check[i]==false) cout<<i;
    // }
    
    // METHOD 2
    // int i=0;
    // while(i<n)
    // {   int correctidx = arr[i];
    //    if(correctidx==i || arr[i]==n) i++;
    //    else swap(arr[i],arr[correctidx]);

    // }
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]!=i) cout<<i;
    // }
    // METHOD 2
    int actualsum = n*(n+1)/2;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<actualsum-sum;
}