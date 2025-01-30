#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,2,3,3,3,3,4,4,5,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    int x;
    cin>>x;
    bool flag = false;
    // while(lo<=hi)
    // {
    //     int mid =( lo + hi)/2;
    //     // First Occurence
    //     if(arr[mid]==x)
    //     {
    //         if(arr[mid-1]!=x)
    //         {
    //             cout<<mid;
    //             flag = true;
    //             break;
    //         }
    //        else{
    //         hi = mid-1;
    //        }
    //     }
    //     else if(arr[mid]>x) hi = mid-1;
    //     else lo = mid+1;
    // }
    // if(flag==false) cout<<-1;
    // Last occurence
     while(lo<=hi)
    {
        int mid =( lo + hi)/2;
        // First Occurence
        if(arr[mid]==x)
        {
            if(arr[mid+1]!=x)
            {
                cout<<mid;
                flag = true;
                break;
            }
           else{
            lo = mid+1;
           }
        }
        else if(arr[mid]>x) hi = mid-1;
        else lo = mid+1;
    }
    if(flag==false) cout<<-1;
}