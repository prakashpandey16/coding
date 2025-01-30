#include<stdio.h>
int main()
{
    for(int i=10;i<110;i+=10)
    {
        printf("%d ",i);
        if(i==100) break;

    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(i==5) continue;
        printf("%d ",i);

    }
}