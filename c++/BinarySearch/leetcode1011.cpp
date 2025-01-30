#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool check(int mid,vector<int>&a,int days)
{
  int n = a.size();
  int m = mid;
  int count = 1;
    for(int i=0;i<n;i++)
    {
      if(m>=a[i])
      {
        m-=a[i];
      }
      else {
        count++;
        m = mid;
        m -=a[i];
      }
    }
    if(count>days) return false;
    else return true;

}
int shipwithindays(vector<int>&c,int days)
{
    int n = c.size();
    int max = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
      if(c[i]>max) max = c[i];
      sum+=c[i];
    }
    int lo = max;
    int hi = sum;
    int min_capacity = sum;
     while(lo<=hi)
     {
       int mid = (lo+hi)/2;
      if(check(mid,c,days)) 
      {
        min_capacity = mid;
        hi = mid-1;
      }
      else lo = mid+1;
     }
     return min_capacity;
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    int days;
    cin>>days;
    cout<<shipwithindays(v,days);

}