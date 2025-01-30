#include<stdio.h>
int main()
{
    int n;
    printf("Enter first number :->");
    scanf("%d",&n);
    int b;
    printf("Enter second number :->");
    scanf("%d",&b);
    if(n%b==0)
    {
        printf("N is divisible by b");
    }
    else
       printf("N is not divisible by b");

}