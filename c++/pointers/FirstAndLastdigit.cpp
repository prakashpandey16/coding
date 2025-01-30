#include<iostream>
using namespace std;
void find(int n, int* ptr1, int* ptr2)
{
    *ptr2 = n%10;
    while(n>9)
    {
        n/=10;
    }
    *ptr1 = n;
    return ;

}
int main()
{
    int n;
    cout<<"Enter a number :->";
    cin>>n;
    int firstdigit , lastdigit;
    int* p1 = &firstdigit;
   int* p2 = &lastdigit;
   find(n,p1,p2);
   cout<<firstdigit<<" "<<lastdigit;
   return 0;

}