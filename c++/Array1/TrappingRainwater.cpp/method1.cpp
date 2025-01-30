#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a)
{ 
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int Trapwater(vector<int>&b)
{    //  for previous greatest elements 
    int n = b.size();
    int prev[n];
    prev[0] =-1;
    int max = b[0];
    for(int i=0; i<n; i++)
    {
        prev[i] = max;
        if(b[i]>max) max = b[i];
    }
        // for next greatest element - we will use prev as next arrray now
        prev[n-1] = -1;

        max = b[n-1];
        for(int i=n-2; i>=0; i--)
        {
             if(max<prev[i])  prev[i]  = max;
             if(b[i]>max) max = b[i];
            
        }
        // minimum array 
        // int mini[n];
        // for(int i=0; i<n; i++)
        // {
        //     mini[i] = min(prev[i],next[i]);
        // }
         // now  we will use prev array as mini array 
         for(int i=0; i<n; i++)
         {
            prev[i] = min(prev[i],prev[i]);
         }
        // calculating water
        int water = 0;
        for(int i=0; i<n-1; i++)
        {
            if(b[i]<prev[i])
            {
                water += (prev[i]-b[i]);
            }

        }
        return water;
    
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter size of array :-> ";
    cin>>n;
    cout<<"Enter elements :->";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int trap_water = Trapwater(v);
    cout<<trap_water;
}