#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {1,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int flips = 0,i = 0,j = 0;
    int maxlen = INT_MIN;

    while(j<n)
    {
        if(arr[j]==0) 
        {
            flips++;
        }
        while(flips>1)
        {
           if(arr[i]==0)
           {
            flips--;
           }
           i++;
        }
        maxlen = max(maxlen,j-i);
        j++;

    }
    cout<<maxlen;
}