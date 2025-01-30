#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
   string s = "prakash";
   string a ="shakarp";
   sort(s.begin(),s.end());
   cout<<s<<endl;
   sort(a.begin(),a.end());
   cout<<a<<endl;
   if(s==a)
   cout<<"True"<<endl;
   else cout<<"false"<<endl;
}
    