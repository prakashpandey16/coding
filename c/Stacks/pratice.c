#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
//push an element in stack threw linkedlist
void push(struct Node** top,int value)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if(!new_node)
    {
        printf("Stack is overflow\n");
        return;
    }
    new_node->val = value;
    new_node->next = *top;
    *top = new_node;
}
void pop(struct Node**top)
{
    if(*top==NULL)
    {
        printf("Stack is underflow");
        return;
    }
    struct Node* temp = *top;
    int value = temp->val;
    *top = (*top)->next;
    printf("%d element is pop from stack\n",value);

}
void TopElement(struct Node* top)
{
   if(top==NULL)
   {
    printf("Stack is underflow\n");
    return;
   }
   printf("Stack top element is : %d\n",top->val);
}
void display(struct Node* top)
{
  if(top==NULL)
  {
    printf("Stack is underFlow\n");
    return;
  }
  struct Node* temp = top;
  printf("Stack elements are : ");
  while(temp!=NULL)
  {
    printf("%d ",temp->val);
    temp = temp->next;
  }
  printf("\n");
}
int main()
{
    struct Node* stack = NULL;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    push(&stack,50);
    display(stack);
    TopElement(stack);
    pop(&stack);
    pop(&stack);

}