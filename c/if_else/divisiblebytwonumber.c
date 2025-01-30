#include<stdio.h>
int main()
{
    int n;
    printf("Enter a  number :");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("Given number is divisible by 5 and 3");

    }
    else {
        printf("Given number is not divisible by 5 and 3");
    }
    return 0;
}