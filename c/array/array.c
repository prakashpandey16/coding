#include<stdio.h>
int main()
{
    int arr[4] = {1,2,3,4};
    printf("%d\n",arr[1]);
    int brr[] = {1,2,3,4,5};
    printf("%d\n",brr[3]);
    // input
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int crr[size];
    printf("Enter elements of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&crr[i]);
    }
    printf("Elements that you enter is :");
     for(int i=0;i<size;i++)
    {
       printf("%d ",crr[i]);
    }

}