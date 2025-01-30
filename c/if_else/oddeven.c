#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%2==0){
        printf("Given number is even number");
    }
    else{
        printf("Given number is odd number");
    }
    return 0;
}