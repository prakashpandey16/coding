#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int  main()
{
    string s;
    cin>>s;
    string t = s;
    reverse(s.begin(),s.end());
    t = t + s;
    cout<<t;
}