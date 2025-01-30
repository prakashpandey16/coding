#include<stdio.h>
#define bool int 
#define true 1
#define false 0
int main()
{
    int n;
    printf("Enter a number :-> ");
    scanf("%d",&n);
    bool isprime = true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
             isprime = false;
             break;
        }

    }
    if(n<=1) printf("%d is  neither prime nor composite",n);
    else if(isprime) printf("Given number is prime number");
    else printf("Given number is composite number");
}