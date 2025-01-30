#include<stdio.h>
void insertElement(int arr[],int *size,int element ,int position)
{
    if(position<0 || position>*size)
    {
        printf("Invalid input\n");
    }

    // loop size to position
    for(int i= *size;i>position;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position] = element;

    (*size)++;

}
void printArray(int arr[],int size)
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
    int size = 5; // current size of array

    printf("Print array : ");
    printArray(arr,size);

    int element = 10;
    int positions = 3;
    printf("Print array after Inserting element : ");
    insertElement(arr,&size,element,positions);
    printArray(arr,size);


}