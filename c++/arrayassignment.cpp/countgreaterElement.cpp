#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter size of array :->";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    int count = 0;
    int x;
    cout<<"Enter a number :->";
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(v[i]>x) count++; 
    }
    cout<<count;
}