#include<stdio.h>
int main()
{
    int age = 10;
    int *ptr = &age;
    printf("%p\n",ptr);
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    // pointer to pointer
    int **p = &ptr;
    printf("%d",**p);
}