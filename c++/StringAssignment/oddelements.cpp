#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<s<<endl;
    for(int i=1;i<n;i+=2)
    {
        s[i] = '#';
    }
    cout<<s;
}