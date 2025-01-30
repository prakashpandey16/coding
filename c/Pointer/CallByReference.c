#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter first number :->");
    scanf("%d",&a);
    printf("Enter second number :->");
    scanf("%d",&b);
    printf("\n Before swapping first number :-> %d\n",a);
    printf(" Before swapping second number :-> %d\n",b);
    swap(&a,&b);
    printf("\n After swapping first number :-> %d\n",a);
    printf("After swapping second number :-> %d\n",b);


    


}