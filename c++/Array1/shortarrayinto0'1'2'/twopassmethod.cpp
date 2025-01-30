 
//  two pass method
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a)
{
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void short012m1(vector<int>&b)
{ 
    int n = b.size();
    int noz = 0;
    int noo = 0;
    int notw = n-1;
    for(int i=0; i<n; i++)
    {
        if(b[i]==0) noz++;
        else if(b[i]==1) noo++;
        else notw++;
    }
    for(int i=0; i<n; i++)
    {
        if(i<noz) b[i] = 0;
        else if(i<noz+noo) b[i] = 1;
        else b[i] = 2;
    }
    return;
}
int main()
{
    vector<int>v;
    v.push_back(0);
     v.push_back(1);
      v.push_back(1);
       v.push_back(2);
        v.push_back(2);
         v.push_back(0);
          v.push_back(2);
           v.push_back(1);
           display(v);
           short012m1(v);
           display(v);
 }
