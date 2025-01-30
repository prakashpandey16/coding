#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void PrintArray(int arr[],int n)
{
    printf("Array element are : ");
    for(int i=0;i<n;i++)
    {
     printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[8] = {1,2,10,5,10,34,56,9};
    int n = 8;
    PrintArray(arr,n);
    int element = 20;
    bubbleSort(arr,n);
    PrintArray(arr,n);
}