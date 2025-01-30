#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int b = 0;
      for(int i=0;i<n;i++)
      {
        b ^=arr[i];
      }
      int a;
      if(b==arr[0])
      {
        a = arr[1];
      }
      else {
        a = arr[0];
      }
      cout<<a<<" "<<b;
}