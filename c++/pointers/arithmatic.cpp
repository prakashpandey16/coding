#include<iostream>
using namespace std;
int main()
{
    int x = 89;
    int* ptr = &x;
    cout<< ptr<<endl;
    ptr= ptr+1;
    cout<<ptr;
}