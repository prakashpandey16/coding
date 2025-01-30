#include<iostream>
#include<vector>
using namespace std;
 void change(vector<int> & b)
 {  b.at(0) = 3000;
    for(int i=0; i<b.size(); i++)
    {
        cout<<b.at(i)<<" ";
    }
    cout<<endl;
 }
int main()
{
    vector<int>v;
    v.push_back(45);
    v.push_back(34);
    v.push_back(412);
    v.push_back(133);
    v.push_back(342);  
    v.push_back(123);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }



}
