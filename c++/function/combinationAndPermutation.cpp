#include<iostream>
using namespace std;
int fact(int x)
{
    int fact = 1;
    for(int i=2; i<=x; i++)
    {
       fact*=i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = fact(n)/ (fact(r) * fact(n-r));
    return ncr;
}
int permutation(int n , int r)
{
    int npr = fact(n)/fact(r);
    return npr;
}

int main()
{ int n;
cout<<"Enter a number :->";
cin>>n;
int r;
cout<<"Enter a number :->";
cin>>r;
  int ncr = combination(n,r);
  int npr = permutation(n,r);
  cout<<ncr<<endl<<npr;
  return 0;


}