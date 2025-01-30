#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>C;
    C.push_back(45);
    cout<<C.size()<<" ";
    cout<<C.capacity()<<endl;
     C.push_back(56);
    cout<<C.size()<<" ";
    cout<<C.capacity()<<endl;
     C.push_back(70);
    cout<<C.size()<<" ";
    cout<<C.capacity()<<endl;
     C.push_back(89);
    cout<<C.size()<<" ";
    cout<<C.capacity()<<endl;



}