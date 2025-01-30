#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(45);
    v.push_back(34);
    v.push_back(34);
    v.push_back(345);
    v.push_back(2);
    v.push_back(893);
    int x = 60;
    int idx = -1;
    // for(int i=0; i<v.size(); i++)
    // { if(v.at(i) == x) idx = i;
        
    // }
    // cout<<idx;
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]==x) idx = i;
    }
    cout<<idx;

}