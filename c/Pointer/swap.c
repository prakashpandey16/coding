#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number :->");
    scanf("%d",&a);
    printf("Enter second number :->");
    scanf("%d",&b);
    printf("Before swapping first number :-> %d\n",a);
    printf("Before swapping second number :-> %d\n",b);
     a = a+b;
     b = a-b;
     a = a-b;
    printf("\n After swapping first number :-> %d\n",a);
    printf("After swapping second number :-> %d\n",b);





    


}