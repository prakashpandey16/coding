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
struct Node* traversal(int* head)
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp = temp->next;
    }
    printf("\n";)

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
     traversal(a);
   free(a);
   free(b);
   free(c);
   free(d);

}