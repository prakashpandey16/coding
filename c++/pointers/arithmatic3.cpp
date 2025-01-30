#include<iostream>
using namespace std;
int main()
{
    int h = 98;
    int* g = &h;
    cout<<*g<<endl;
    // *g++; this is not working .
    (*g)++;//now this is working.
    cout<<*g;

}