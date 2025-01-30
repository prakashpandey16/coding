#include<iostream>
#include<vector>
using namespace std;
int maximum(vector<int>&n,int idx,int max)
{
    if(n.size()==idx){
        return max;
    }
    if(n[idx]>max) max = n[idx];
    maximum(n,idx+1,max);

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
    cout<<maximum(v,0,-1);
    

}