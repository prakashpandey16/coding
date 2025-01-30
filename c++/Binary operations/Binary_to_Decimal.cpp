#include<iostream>
using namespace std;
int Binary_to_decimal(string &s)
{
    int n = s.size();
    int result = 0;
    for(int i=n-1;i>=0;i--)
    {
        char ch = s[i];
        int num = ch-'0';
        result = result + num * (1<<(n-i-1));
    }
    return result;
}
int main()
{
    string s = "001101";
    cout<<Binary_to_decimal(s);
}
