#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack[100];
int top = -1;

// push an element in stack
void push(int value)
{
    if(top==MAX-1)
    {
        printf("stack is overflow");
    }
    else{
        stack[++top] = value;
    }

}

// void pop an element from stack
void pop()
{
    if(top==-1)
    {
        printf("Stack is underflow");
    }
    else{
        int value = stack[top--];
        printf("Element %d is pop from stack\n",value);
    }
}
// top element of stack
void TopElement()
{
    if(top==-1)
    {
        printf("Stack is underflow");
    }
    else{
        printf("Stack top element now is : %d\n",stack[top]);
    }
}
// traversing in stack and printing all element
void display()
{
   if(top==-1)
   {
    printf("Stack is underflow");
   }
   else
    {
    printf("Stack elements are : ");
    for(int i=0;i<=top;i++)
     {
        printf("%d ",stack[i]);
     }
     printf("\n");
   }
}

int main()
{
  push(10);
  push(20);
  push(30);
  push(40);
  display();
  TopElement();
  pop();
  pop();
  display();

}
