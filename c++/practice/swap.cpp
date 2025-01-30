#include<iostream>
using namespace std;

int main()
{
    int a,b;
    // 9 5 
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//    cout<<a<<" "<<b;
  a = a^b;
  b = a^b;
  a = a^b;
  cout<<a<<" "<<b;
  }