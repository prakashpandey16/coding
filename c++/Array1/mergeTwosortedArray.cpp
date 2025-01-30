#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& d)
{
    for(int i=0; i<d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    
}
vector<int>merge(vector<int>&arr1,vector<int>arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int>res(n+m);
    int i=0; //arr1
    int j=0;//arr2
    int k=0;// res
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
          res[k] = arr1[i];
          i++;
          k++;
        }
        else // arr2[j]>arr1[i]
        {
            res[k] = arr2[j];
            j++;
            k++;
            
        }
        // for remaining element
        if(i==n)
        {
            while(j<m)
            {
                res[k] = arr2[j];
                j++;
                k++;
            }
        }
        if(j==m)
        {
            while(i<n)
            {
                res[k] = arr1[i];
                i++;
                k++;
            }
        }
    
        
    }
    return res;
}
int main()
{
    vector<int>arr1;
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(6);
     arr1.push_back(10);
    display(arr1);
    vector<int>arr2;
    arr2.push_back(1);
    arr2.push_back(4);
    arr2.push_back(5);
    arr2.push_back(7);
    arr2.push_back(8);
    arr2.push_back(12);
    display(arr2);
    vector<int>v = merge(arr1,arr2);
    display(v);
    
}