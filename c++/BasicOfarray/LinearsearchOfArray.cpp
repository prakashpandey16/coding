#include<iostream>
using namespace  std;
int  main()
{
    int n;
    cout<<"Enter size of array :->";
    cin>>n;
    int arr[n];
    cout<<"Enter Element of array :->";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element of array you want to search :->";
    cin>>x;
    bool flag = false;
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i] == x) flag = true;
    }
    if(flag == true ) cout<<"Element present in array";
    else cout<<"Element not found";
}
