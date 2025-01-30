#include<iostream>
#include<vector>
using namespace std;
void rearrange(vector<int>&a)
{
    int n = a.size();
    int i=0;
    int j=n-1;
     while(i<=j)
     {
        if(a[i]<0) i++;
        else if(a[j]>0) j--;
        else if(a[i]>0 && a[j] < 0)
        {
            int temp = a[i];
            a[i] =a[j];
            a[j] = temp;
            i++;
            j--;
        }
     }
        cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(-5);
    v.push_back(2);
    v.push_back(-3);
    v.push_back(9);
    v.push_back(-4);
    v.push_back(-7);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    rearrange(v);
      for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}