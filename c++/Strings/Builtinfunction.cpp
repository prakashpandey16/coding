#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "abcdef";
    cout<<s.length()<<endl;//s.lenth used to get length of string
    cout<<s.size()<<endl;
    s.push_back('g');// used to add elements in string
    s.push_back('h');
    cout<<s<<endl;
    s.pop_back();
    s.pop_back();
    cout<<s<<endl;
    // reverse(s.begin(),s.end());// used to reverse string
    // cout<<s<<endl;
    // reverse(s.begin()+1,s.begin()+5);
    // cout<<s<<endl;
     s = s +"abc";
    cout<<s<<endl;//used to add elements in string or concatenate two string
     string a = "abcdef";
      s = s+a;
      cout<<s<<endl;
      int n = s.length();
    string str = s.substr(2,n-1);// used to generate substring
    cout<<str<<endl;
    int x = 456467;
    string y = to_string(x);//used to transfer integer to string
    cout<<y<<endl;
    



 }