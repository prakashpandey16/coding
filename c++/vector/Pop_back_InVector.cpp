#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V;
    V.push_back(45);
    V.push_back(46);
    V.push_back(67);
    V.push_back(490);
    V.push_back(453);
    V.push_back(99);
     V.push_back(425);
     V.push_back(495);
     V.push_back(45949); 
     V.push_back(4534);
     cout<<"Size is :->"<<V.size()<<endl;
     cout<<"Capacity is :->"<<V.capacity()<<endl;
     V.pop_back();// pop_back() basically use for removing value of vector;
     V.pop_back();
     V.pop_back(); 
     V.pop_back();
     V.pop_back();
     V.pop_back();
      cout<<"Size is :->"<<V.size()<<endl;
     cout<<"Capacity is :->"<<V.capacity()<<endl;

}