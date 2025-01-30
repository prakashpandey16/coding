#include<stdio.h>
#define bool int
#define true 1
#define false 0
int main()
{
    int arr[5] = {10,20,30,76,34};
    int x;
    printf("Enter a value that you want to search in array :->");
    scanf("%d",&x);
    bool found = false;

    for(int i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
            found = true;
            break;
        }

    }
    if(found) printf("Element is present in array");
    else printf("Element is  not present in array");
}