#include<iostream>
using namespace std;
int minimum_Bits_require_toconvert_1numberTOanother(int x,int y)
{
   return __builtin_popcount(x^y);
}
int main()
{
    int x = 23;
    int y = 32;
    cout<<minimum_Bits_require_toconvert_1numberTOanother(x,y);

}