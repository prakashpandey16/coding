#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,1,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for(int i=0;i<n;i++)
    {
        res = res ^ arr[i];
    }
    cout<<res;
}