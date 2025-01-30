#include<stdio.h>
void printArray(int arr[],int size)
{
    // array always pass with reference 
    for(int i=0;i<size;i++) 
    {
        // printf("%d ",arr[i]);
        printf("%d ", *(arr + i)); // printing threw * operator

    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    printArray(arr,size);
}