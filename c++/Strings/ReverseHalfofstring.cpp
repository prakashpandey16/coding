#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string with even length :->";
    cin>>s;
    int n = s.size();
    reverse(s.begin()+n/2,s.end());
    cout<<s;
  

   
}