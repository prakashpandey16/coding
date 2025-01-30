#include<iostream>
#include<vector>
using namespace std;
 void Displayarray(int arr[],int n,int idx)
{
    if(idx==n) return ;
    cout<<arr[idx]<<" ";
    Displayarray(arr,n,idx+1);
    
}
 void Displayarray2(vector<int>&v,int idx)
{
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    Displayarray2(v,idx+1);
    
}
int main()
{
    int arr[] = {1,4,2,3,423,13,313};
    int n = sizeof(arr)/sizeof(arr[0]);
    Displayarray(arr,n,0);
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=arr[i];
    }
    cout<<endl;
    Displayarray2(v,0);
    
}