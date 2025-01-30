#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {1,2,4,5,9,15,18,21};
    int n =8;
    int target;
    cin>>target;
    int low = 0;
    int hi = n-1;
    bool found = false;
    while(low<=hi)
    {
        int mid = low + (hi-low)/2;
        if(arr[mid]==target) 
        {  cout<<mid;
            found = true;
            break;
        }
        else if(arr[mid]>target) hi= mid -1;
        else low = mid+1;
    }
    if(found==false) cout<<-1;
    return 0;
}