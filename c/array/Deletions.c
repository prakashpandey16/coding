#include<stdio.h>
void DeletionArray(int arr[],int *size,int position)
{
    if(position<0 || position>*size)
    {
        printf("Invalid Input\n");
    }
    
    for(int i=position;i<*size-1;i++)
    {
        arr[i] = arr[i+1];
    }
   ( *size)--;
}
void printfArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[10] = {1,2,3,4,5};
    int size = 5;
    printf("Print array Before Deletions : ");
    printfArray(arr,size);

    //  delete positions 2 element
    int positions = 2;

 printf("Print array After Deletions : ");
 DeletionArray(arr,&size,positions);
 printfArray(arr,size);



}