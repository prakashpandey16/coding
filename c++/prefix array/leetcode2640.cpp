// Input: nums = [2,3,7,5,10]
// Output: [4,10,24,36,56]
#include<iostream>
#include<vector>
using namespace std;
vector<long long>findprefixscore(vector<int>&arr)
{
   int n = arr.size();
   vector<long long>ans(n,0);
   ans[0] = 2*arr[0];
   int mx = arr[0];
   for(int i=1;i<n;i++)
   {
      mx = max(mx,arr[i]);
     ans[i] = arr[i] + mx + ans[i-1];
   }
   return ans;
}
int main()
{
    vector<int>arr = {2,3,7,5,10};
    vector<long long>ans =findprefixscore(arr);
    // for each loop 
    for(long long nums :ans)
    {
        cout<<nums<<" ";
    }
    return 0;
}