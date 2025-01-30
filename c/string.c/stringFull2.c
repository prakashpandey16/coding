#include<stdio.h>
#include<string.h>
int main()
{
    // char str[100];
    // fgets(str,100,stdin);
    // puts(str);
    char arr[] = "prakashpandey";
    int length = strlen(arr);
    printf("The Length of string is :-> %d",length);
    char oldstr[] = "oldstr";
    printf("%s\n",oldstr);
    char newstr[] = "newstr";
    printf("%s\n",newstr);
    strcpy(oldstr,newstr);
    printf("%s\n",newstr);
    printf("%s\n",oldstr);

    return 0;

}