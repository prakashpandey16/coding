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
    for(int i=0, j = n-1; i<=j; i++, j--)
    {
        
        int temp = b[i];
        b[i]= b[j];
        b[j] = temp;
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter number of elements :->";
    cin>>n; 
    for(int i=0; i<n; i++)
    {
        int x;
        cout<<"Enter elements "<<i+1<<" of array :->";
        cin>>x;
        v.push_back(x);
    }
    display(v);
    reverse(v);
    display(v);

}