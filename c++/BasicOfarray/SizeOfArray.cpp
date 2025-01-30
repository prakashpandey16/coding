#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,5,7,3,4,7,8,5,4,8,4,7,6,3,4,5,6,4,2,3,4,6,7};
    int Size = sizeof(arr) / sizeof(arr[5]);
    cout<<Size;
}