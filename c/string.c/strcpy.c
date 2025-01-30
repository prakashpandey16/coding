#include<stdio.h>
#include<string.h>
int main()
{
    char string1[20] ="hello";
    char string2[20];
    strcpy(string2,string1);
    printf("str:%s\n",string1);
    return 0;
}