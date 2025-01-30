#include<iostream>
using namespace std;
int main()
{
    int x,y;
    // int* p1 = &x, p2 = &y :- This is a problem in  pointer syntax,so don't use that thing
    //  and declare pointers in seprate line.
    int* p1 = &x, *p2 = &y;//now this is correct.
    cout<<p1<<" "<<p2;
}