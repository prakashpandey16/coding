#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&b)
{
    for(int i=0; i<b.size(); i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>&b)
{ 
    int n = b.size();
    for(int i=0, j = n; i<=j; i++, j--)
    {
        
        int temp = b[i];
        b[i]= b[j];
        b[j] = temp;
    }
}
int main()
{
    vector<int>v;
    for(int i=0; i<v.size(); i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    reverse(v);
    display(v);

}