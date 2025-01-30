#include<iostream>
#include<vector>
using namespace std;
void short01(vector<int>&a)
{ 
    // two pass method 
    // int n = a.size();
    // int noz = 0;
    // int noo  = 0;
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]==0) noz++;
    //     else noo++;
    // }
    // for(int i=0; i<n; i++)
    // {
    //     if(i<noz) a[i] = 0;
    //     else a[i]= 1; 
    // }
}
void short01m2(vector<int>&b)
{ 
    // two pointer method
    int n = b.size();
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(b[i]==0) i++;
        else if(b[j]== 1) j--;
         else if(b[i]==1 && b[j]==0)
        {
            b[i]=0;
            b[j] = 1;

        }
        cout<<endl;
    }

}
    int main()
    {
        vector<int>v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

        short01m2(v);
        
         for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }

    }