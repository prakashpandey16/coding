#include<stdio.h>
void reverseArray(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[5] = {10,20,30,40,50};
    printf("Enter elements of array :->");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverseArray(arr,5);

}