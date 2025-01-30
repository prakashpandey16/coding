#include <iostream>
using namespace std;
void largest_power_smaller(int n)
{
    int largest = -1,smallest = -1;
    for(int i=0;i<32;i++)
    {
        if(n & (1<<i))
        {
            smallest = i;
            break;
        }
    }
    for(int i=31;i>=0;i--)
    {
      if(n &(1<<i))
      {
          largest = i;
          break;
      }
    }
    cout<<(largest)<<endl<<(smallest);
}


int main() {
  int n;
  cin>>n;
 largest_power_smaller(n);
  
}