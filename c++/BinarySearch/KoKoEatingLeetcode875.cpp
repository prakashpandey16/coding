#include<iostream>
#include<vector>
using namespace std;
bool check(int speed,vector<int>&v,int h)
{
    int n = v.size();
    long long count = 0;
     for(int i=0;i<n;i++)
     {
        if(speed>=v[i])count++;
        else if(v[i]%speed==0) count += (long long)(v[i]/speed);
        else count += (long long)((v[i]/speed)+1);
     }
     if(count>(long long )h) return false;
     else return true;
}
int kokoeating(vector<int>&v,int h)
{
   int n = v.size();
   int mx = -1;
   for(int i=0;i<n;i++)
   {
    mx = max(mx,v[i]);
   }
   int lo = 1;
   int hi = mx;
   int ans = -1;
   while(lo<=hi)
   {
    int mid = lo + (hi-lo)/2;
    if(check(mid,v,h))
    {
        ans = mid;
        hi = mid-1;
    }
    else lo = mid+1;
   }
   return ans;
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
   int h;
   cin>>h;
   cout<<kokoeating(v,h);

}
