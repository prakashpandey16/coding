#include<stdio.h>
void printMyArray(int arr[],int n)
{
    arr[2] = 100;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[5] = {10,20,30,40,50};
    printMyArray(arr,5);

}