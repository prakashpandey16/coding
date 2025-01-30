#include<stdio.h>
int main()
{   //1000 997 994 991 ....
    int n;
    printf("Enter a number -:");
    scanf("%d",&n);
   int a=1000;
    for (int i=1000; a>0; i++)
    {
        printf("%d\n",a);
        a=a-3;
    }
    return 0;

}
