#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q)
{
      int n = q.size();
      for(int i=0;i<n;i++)
      {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
      }
      cout<<endl;
}
void reverse(queue<int>&a)
{
  int n = a.size();
  stack<int>st;
  while(a.size()>0)
  {
    int x = a.front();
    a.pop();
    st.push(x);

  }
  while(st.size()>0)
  {
    int x = st.top();
    st.pop();
    a.push(x);
  }
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
}