#include<stdio.h>
int main()
{
    int a = 10;
    printf("%d\n",a);
    float b = 24.4;
    printf("%f\\n",b);
    char ch = 'a';
    printf("%c\n",ch);
    char c[30] = "Prakash pandey";
    printf("%s\n",c);
    int arr[5] = {10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // char d[30];
    // printf("Enter a string : ");
    // scanf("%s",&d);
    // printf("string is :%s\n",d);
    
    // input a whole string
    char e[100];
    printf("Enter a string : ");
    fgets(e,100,stdin);
    printf("string is :%s\n",e);
    


}