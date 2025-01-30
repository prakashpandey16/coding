#include<iostream>
#include<vector>
using namespace std;
void subset(string ans, string original,vector<string>&v)
{
   if(original=="")
   {
    v.push_back(ans);
    return;
   }
   char ch = original[0];
   subset(ans,original.substr(1),v);
   subset(ans+ch,original.substr(1),v);
}
int main()
{
    string s;
    cin>>s;
    vector<string>v;
    subset("",s,v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}
