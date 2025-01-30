#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(56);
    v.push_back(45);
    v.push_back(23);
    v.push_back(454);
     // cout<<v.at(2);// at basically use for access of of variable.
    // cout<<endl<<v.at(1);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
   sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
}
