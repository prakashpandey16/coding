#include<iostream>
using namespace std;
int fliping_All_bits_ofA_Number(int n)
{ 
     int temp = n;
    n= n|(n>>1);
    n = n|(n>>2);
    n = n|(n>>4);
    n = n|(n>>8);
    n = n|(n>>16);
    return  n ^ temp;

}
int main()
{
  int n = 23;
  cout<<fliping_All_bits_ofA_Number(n);
}