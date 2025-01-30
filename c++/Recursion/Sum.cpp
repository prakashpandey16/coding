// method 1

// #include<iostream>
// using namespace std;
// void sum1(int sum,int n)
// {
//   if(n==0)
//   {
//     cout<<sum<<endl;
//     return;
//   }
//    sum1(sum+n,n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     sum1(0,n);
   
// }

// Method 2

#include<iostream>
using namespace std;
int sum2(int n)
{
  if(n==0) return 0;
  return n+sum2(n-1);

}

int main()
{
    int n;
    cin>>n;
    cout<<sum2(n);
   
}
