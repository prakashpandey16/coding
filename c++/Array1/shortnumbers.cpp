#include<iostream>
#include<vector>
using namespace std;
void shortnum(vector<int>&a)
{
    int n = a.size();
    int noz = 0;
        int noo = 0;
        int notw = 0;
    for(int i=0; i<n; i++)

      {  if(a[i]==0) noz++;
        else if(a[i] == 1) noo++;
        else notw++;
    }
    for(int i=0; i<n; i++)
    {
        if(i<noz) a[i] = 0;
        else if(i<(noz+noo)) a[i] = 1;
        else a[i] = 2;
    }
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    shortnum(v);
     for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}