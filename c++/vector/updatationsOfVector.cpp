#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> B;
    B.push_back(6);
    B.push_back(8);
    B.push_back(19);
    B.push_back(45);
    for(int i=0; i<B.size(); i++) // B.size() operator gives size of vector
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
    B[3] = 34;
     for(int i=0; i<B.size(); i++) // B.size() operator gives size of vector
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
    B[2] = 900;
     for(int i=0; i<B.size(); i++) // B.size() operator gives size of vector
    {
        cout<<B[i]<<" ";
    }



}