#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* p = &a;
    int b =(*p) ++;
    cout<<a<<" "<<b;
}