#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    vector<string>v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    int n = v.size();
    sort(v.begin(),v.end());
    string first = v[0];
    string last = v[n-1];
    string s = "";
    for(int i=0;i<(min(first.size(),last.size())); i++)
    {
        if(first[i]==last[i]) 
        {
            s+=first[i];
        }
        else break;
    }
    cout<<s;
    
}