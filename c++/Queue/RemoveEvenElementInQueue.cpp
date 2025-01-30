#include<iostream>
#include<queue>
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
void removeEven(queue<int>&b)
{ 
    int n = b.size();
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {  int x = b.front();
            b.push(x);
        }
        b.pop();

        
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
    q.push(60);
    display(q);
    removeEven(q);
    display(q);

}