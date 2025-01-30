#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s = "azyzxbdjkx";
    cout<<s;
    string str;
    char x = 'x';
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=x)
        {
            str.push_back(s[i]);
        }
    }
    int n = str.length();
    cout<<endl;
      cout<<str<<endl;
    
    // sorting 
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(str[j]>str[j-1])
            {
                swap(str[j],str[j-1]);
            }
        }
    }
    cout<<str;

}