#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter a cost price :");
    scanf("%d",&cp);
    printf("Enter a selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(cp>sp){
        printf("loss");
    }
    if(sp==cp){
        printf("no profit no loss");
    }
    return 0;
}