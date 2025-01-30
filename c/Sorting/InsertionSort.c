#include<stdio.h>
void InsertionSort(int arr[],int size)
{
    for(int i = 1;i<size;i++)
    {
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current)
        { 
            arr[prev+1] = arr[prev];
            prev--; 

        }
        arr[prev+1]  = current;
    }
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[5] = {4,1,5,2,3};
    int n = 5;
    printf("Array before swapping : ");
    PrintArray(arr,n);
    InsertionSort(arr,n);
    printf("Array After swapping : ");
    PrintArray(arr,n);

}