#include<stdio.h>
#include<limits.h>
void BubbleSort(int arr[],int n)
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
void insertionSort(int arr[],int n)
{
    for(int j=1;j<n; j++)
    {
        int current =  arr[j];
        int prev = j-1;
        while(prev>=0 && arr[prev]>current)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
}
void selectiosSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = INT_MAX;
        int mindx = -1;
       for(int j=i;j<n;j++)
       {
        if(arr[j]<min)
        {
            min = arr[j];
            mindx = j;
        }
       }
        int temp = arr[i];
        arr[i] = arr[mindx];
        arr[mindx] = temp;
    }
}
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[5] = {5,2,4,3,1};
    int n = 5;
    // printf("Array elements are before sorting : ");
    // PrintArray(arr,n);
    // BubbleSort(arr,n);
    // printf("Array elements are after sorting : ");
    // PrintArray(arr,n);
    // printf("Array elements are before sorting : ");
    // PrintArray(arr,n);
    // insertionSort(arr,n);
    // printf("Array elements are after sorting : ");
    // PrintArray(arr,n);
    printf("Array elements are before sorting : ");
    PrintArray(arr,n);
    selectiosSort(arr,n);
    printf("Array elements are after sorting : ");
    PrintArray(arr,n);
}