#include<iostream>
#include<vector>
using namespace std;
 void display (vector<int>&a) 
{
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j,vector<int> & b)
{ 
    while(i<=j)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    
}
int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);
    display(v);
    reversepart(0,2,v);
    display(v);

    
}