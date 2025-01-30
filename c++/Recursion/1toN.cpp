// Method 1
// With extra parameter

#include<iostream>
using namespace std;
void OnetoN(int i,int n)
{
    if(i>n) return;
    cout<<i<<endl;
    OnetoN(i+1,n);
}
   

int main()
{
    int n;
    cin>>n;
    OnetoN(1,n);
}

// Method 2 without extra parameter
#include<iostream>
using namespace std;
void OnetoN(int n)
{
  if(n==0) return;
  OnetoN(n-1);
  cout<<n<<endl;
}
   

int main()
{
    int n;
    cin>>n;
    OnetoN(n);
}