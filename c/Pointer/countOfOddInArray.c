#include<stdio.h>
int main()
{
    int arr[5] = {10,3,20,9,11};
    int odd_count = 0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2!=0) odd_count++;
    }
    printf(" Number of odd elements in array :-> %d",odd_count);
}