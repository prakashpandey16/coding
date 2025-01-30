//  Also known as 3 pointer method

#include<iostream>
#include<vector>
using namespace std;

void shortnum(vector<int>&a)
{
    int low = 0;
    int mid = 0;
    int high = a.size()-1;
    while(mid <=high)
    {
        if(a[mid]==2)
        {
            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
        else if(a[mid]==0)
        {
            int temp = a[mid];
             a[mid] = a[low];
             a[low] = temp;
             mid++;
             low++;
             
        }
        else{
            mid++;
        }
    }
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    shortnum(v);
     for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}