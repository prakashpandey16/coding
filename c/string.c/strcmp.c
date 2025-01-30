#include<stdio.h>
#include<string.h>
int  main()
{
    char class[] ="geeks";
    char standard[] ="geeks";
    printf("class:%s\n",class);
    printf("standard:%s\n",standard);
    printf("return vlaue of strcmp():%d",strcmp(class,standard));
    return 0;
}