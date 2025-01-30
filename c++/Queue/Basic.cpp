#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    //push()-> used to insert element
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // front()->used to print front element
    cout<<q.front()<<endl;
    // size()-> used to print size
    cout<<q.size()<<endl;
    //pop()->used to pop element(pop from front)
    q.pop();
    cout<<q.size()<<endl;
    // back()->used to print back element
    cout<<q.back()<<endl;
    // empty() it is also an operation 



}
