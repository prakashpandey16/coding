#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  // Linear search approach
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=i) 
    {
        cout<<i;
        break;
    }
  }
  
  // Binary search algorithim
  int lo = 0;
  int hi = n-1;
  int ans = -1;
  while(lo<=hi)
  {
    int mid = (lo+hi)/2;
     if(arr[mid]==mid) lo = mid+1;
     else{
        ans = mid;
        hi = mid-1;
     }
  }
  cout<<ans;
}