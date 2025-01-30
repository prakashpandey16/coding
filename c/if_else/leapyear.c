#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year :");
    scanf("%d",&n);
    if(n%4==0){
        printf("Given year is a leap year");  
    }
    else{
        printf("Given number is not a leap year");
    }
    return 0;
}