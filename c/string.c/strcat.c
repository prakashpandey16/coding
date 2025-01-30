#include<stdio.h>
#include<string.h>
 int main()
 {
    char src[50],dust[50];
    strcpy(src,"this is good man");
    strcpy(dust,"this is honest man");
    strcat(dust,src);
    printf("final destination string is :%s",dust);
    return 0;
 }