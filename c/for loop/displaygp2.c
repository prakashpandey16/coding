#include<stdio.h>
int main()
{   //3 12 48
    int n;
    printf("Enter a number -:");
    scanf("%d",&n);
    int a=3;
    for(int i=1;i<=n; i++)
    {
        printf("%d\n",a);
        a=a*4;
    }
    return 0;
}