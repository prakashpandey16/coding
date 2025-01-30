#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_front(20);
    dq.push_front(10);
    dq.push_back(30);
    dq.push_back(40);
    int n = dq.size();
    for(int i=0;i<n;i++)
    {
        int x = dq.front();
        dq.pop_front();
        cout<<x<<" ";
        dq.push_back(x);
    }
    cout<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    dq.pop_front();
    dq.front();
    

}