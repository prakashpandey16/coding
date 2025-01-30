#include<stdio.h>
int partitions(int arr[],int low ,int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[i] = temp;
        }
    }
    i++;
     int temp = arr[i]; 
     arr[i] = pivot;
     arr[high] = temp;
     return i;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pidx = partitions(arr,low,high);
        quickSort(arr,low,pidx-1);
        quickSort(arr,pidx+1,high);
    }
}
void printArray(char*message,int arr[],int n)
{
    printf("%s :",message);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[5] = {5,3,2,4,1};
    int n = 5;
    printArray("Array before Sorting",arr,n);
    quickSort(arr,0,n-1);
    printArray("Array After Sorting",arr,n);

}