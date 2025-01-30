#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void next (vector<int>&v)
{
    int n = v.size();
    int arr[n];
    arr[n-1]= -1;
    int max = v[n-1];
    for(int i=n-2; i>=0; i--)
    {
        arr[i] = max;
        if(v[i]>max) max = v[i];
    }
    for(int i = 0; i<n; i++)
    {
        v[i] = arr[i];
    }
}
int main()
{
    vector<int>v;
    int n;
    cout<<"enter size of vector :-> ";
    cin>>n;
    cout<<"Enter elements of array :->";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    next(v);
    display(v);


}
