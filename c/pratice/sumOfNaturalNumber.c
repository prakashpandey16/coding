#include<stdio.h>
int main()
{
    int n,sum1 = 0,sum2 = 0;
    printf("Enter a number :->");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum1+=i;
        printf("Sum of 0 to %d is :-> %d\n",i,sum1);
    }
    printf("\n\n");
    
     for(int i=n;i>=1;i--)
    {
        sum2+=i;
        printf("Sum of n to %d is :-> %d\n",i,sum2);
    }



}