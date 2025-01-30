#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}
int main()
{
    struct Node *a = createNode(10);
    struct Node *b = createNode(20);
    struct Node *c = createNode(30);
    struct Node *d = createNode(40);
    a->next = b;
    b->next = c;
    c->next = d;
    printf("%d \n",b->val);
    struct Node* temp = a;
   while(temp!=NULL)
   {
    printf("%d ",temp->val);
    temp = temp->next;
   }
   printf("\n");
   free(a);
   free(b);
   free(c);
   free(d);

}