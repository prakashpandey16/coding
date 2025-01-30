#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string &s)
{
    int n = s.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(s[i]!=s[j])  return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    cout<<(ispalindrome(s)? "YES":"N0");
}
