#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array :->";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of a array :->";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter size of array :->";
    cin>>x;
    int copy[x];
    cout<<"Enter elements of array :->";
    for(int i=0; i<x; i++)
    {
        cin>>copy[i];
    }
    bool flag = true;
    if(x != n)
    {
        flag = false;
    }
    else {
        for(int i=0; i<n; i++)
        {
            if(copy[i] != arr[i]) {flag = false;
            break;}
        }
    }
    if(flag) cout<<"Copy is found ";
    else cout<<"copy is not found";
    return 0;
}