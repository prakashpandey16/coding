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
void prev(vector<int>&b)
{
    int n = b.size();
    int arr[n];
    arr[0] = -1;
    int max = b[0];
    for(int i=1; i<n; i++)
    {
        arr[i] = max;
        if(b[i]> max) max = b[i];
    }
    // Modify the original vector 'b' with previous greatest elements
    for(int i=0; i<n; i++)
    {
        b[i] = arr[i];
    }
    return ;
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
  prev(v);
  display(v);


    
}