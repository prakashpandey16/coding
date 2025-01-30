#include<iostream>
using namespace std;
void Hello ()
{
    cout<<"Hello ji"<<endl;
}
int Hey ()
{
    cout<<"hey man"<<endl;
    Hello();
    return 0;
}
int main()
{
   Hey();
   return 0;
}