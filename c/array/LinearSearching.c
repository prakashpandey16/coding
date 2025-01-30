#include<stdio.h>
#include<stdbool.h>

void LinearSearch(int arr[],int size,int x)
{
    bool find = false;
    int index = -1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]== x)
        {
            find = true;
            index = i;
            break;
        }
    }
    if(find==true) 
     printf("Element is found at index : %d",index);
    else
        printf("Element is  not found");
  
}
int main()
{
  int arr[7] = {1,2,15,20,25,60,70};
  int size = 7;
  int x;
  printf("Enter Elements that you want to Search in array :->");
  scanf("%d",&x);
  LinearSearch(arr,size,x);

}