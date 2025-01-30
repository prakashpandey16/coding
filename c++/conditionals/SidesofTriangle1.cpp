#include<iostream>
using namespace std;
int main()
{
    int  s1,s2,s3;
    cout << "Enter 1st side :";
    cin>>s1;
    cout << "Enter 2nd side :";
    cin>>s2;
    cout << "Enter 3rd side :";
    cin>>s3;
    if (s1+s2>s3)
    cout << " valid triangle";
    else 
    cout << "invalid triangle";
}