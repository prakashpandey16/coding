#include<stdio.h>
int main()
{
     int day;
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        default:
        printf("Wednesday");
    }
    return 0;
}