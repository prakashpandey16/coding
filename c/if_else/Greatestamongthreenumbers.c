#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter first numner :");
    scanf("%f",&a);
    printf("Enter second number :");
    scanf("%f",&b);
    printf("Enter a third number :");
    scanf("%f",&c);
    if(a>b && a>c){
        printf("a is gratest among them");
    }
     else  if(b>a && b>c){
        printf("b is greatest among them");
    }
   else  if(c>a && c>b){
        printf("c is greatest among them ");
    }
     else {
        printf("all are equal");
    }
    return 0;
}