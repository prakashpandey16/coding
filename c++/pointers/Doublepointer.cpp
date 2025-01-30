#include<iostream>
using namespace std;
int  main()
{
    int n = 5;
    int* p = &n;
    int** ptr  = &p;
    cout<<n<<endl;
    cout<<*p<<" "<<**ptr;
}