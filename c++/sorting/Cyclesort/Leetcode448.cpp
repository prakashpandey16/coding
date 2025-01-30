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
    int i=0;
    while(i<n)
    {
        int correctidx = arr[i]-1;
        if(arr[correctidx]==arr[i]) i++;
        else swap(arr[i],arr[correctidx]);
    }
    vector<int>ans;
    for(int i=0;i<n; i++)
    {
        if(arr[i] !=i+1) ans.push_back(i+1);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
// [4,3,2,7,8,2,3,1]
}