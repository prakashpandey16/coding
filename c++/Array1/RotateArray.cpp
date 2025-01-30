#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0; i<a.size(); i++)
    {
       cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j, vector<int>&b)
{
    while(i<=j)
    {
        int temp = b[i];
        b[i]= b[j];
        b[j]= temp;
        i++;
        j--;
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
     int n = v.size();
     display(v);
     int k;
     cout<<"How many time you want to rotate array :->";
     cin>>k;
     if(k>n) k= k%n;
    reversepart(0,n-k-1,v);
    reversepart(n-k, n-1, v);
    reversepart(0,n-1,v);
    display(v);
}




