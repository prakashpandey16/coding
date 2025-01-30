#include<iostream>
#include<vector>
using namespace std;

int minimum(vector<int>&n,int idx,int mini)
{
    if(n.size()==idx){
        return mini;
    }
    if(n[idx]<mini) mini = n[idx];
    minimum(n,idx+1 ,mini);

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];

    }
    cout<<minimum(v,0,1000);
    

}