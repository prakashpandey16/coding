#include<stdio.h>
#include<limits.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int Min = INT_MAX;
        int mindx = -1;
        for(int j=i;j<size;j++)
        {
            if(arr[j]<Min)
            {
                Min = arr[j];
                mindx = j;
            }
        }
        swap(&arr[i],&arr[mindx]);
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
 int arr[] = {5,3,1,2,4};
 int n = 5;
 printf("Array Before swapping : ");
 PrintArray(arr,n);
printf("Array After swapping : ");
selectionSort(arr,n);
PrintArray(arr,n);

 

 
}