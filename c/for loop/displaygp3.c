#include<stdio.h>
int main()
{   //100 50 25 ...
    int n;
    printf("Enter a number -:");
    scanf("%d",&n);
    int a=100;
    for(int i=1;i<=n; i++)
    {
        printf("%d\n",a);
        a=a*1/2;
    }
    return 0;
}