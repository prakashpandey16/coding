#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int maxcount = 1;
    int count = 1;
    int n = v.size();
    for(int i=1;i<n;i++)
    {
        if(v[i]==v[i-1]) count++;
        else count = 1;
        
        if(count > maxcount) maxcount = count;
      
    }
    count = 1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(maxcount==count) 
        {
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
    
    
}