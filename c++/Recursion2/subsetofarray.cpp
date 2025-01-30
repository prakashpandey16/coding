#include<iostream>
#include<vector>
using namespace std;
void printsubset(int arr[],int n,int idx,vector<int>ans)
{
    if(idx==n)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printsubset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
       printsubset(arr,n,idx+1,ans);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    printsubset(arr,n,0,v);
    
}
