#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void next(vector<int>&b)
{
    int n = b.size();
    int brr[n];
    brr[n-1] = -1;
    int max = b[n-1];
    for(int i=n-2; i>=0; i--)
    {
        brr[i] = max;
        if(b[i]>max) max = b[i];
    }
    // Modify the original vector 'b' with next greatest elements
    for(int i=0; i<n; i++)
    {
       b[i] = brr[i];
    }
    return;

}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter size of array :->";
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