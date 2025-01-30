#include<iostream>
#include<vector>
using namespace std;
vector<long long int >fact(int n)
{
    vector<long long int> ans(n+1,1);
    int mod = 1000000000 + 7;
    for(int i=2;i<=25;i++)
    {
        ans[i] = ((i%mod )* (ans[i-1]%mod) % mod);
    }
    return ans;
  
}
int main()
{
    int n = 25;
    vector<long long int>result = fact(n);
    for(int i=0;i<result.size();i++)
    {
        cout<<i<<"!= "<<result[i]<<endl;
    }

}