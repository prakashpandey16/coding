#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node * next;
};
struct Node* createNode(int value)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if(!new_node)
    {
        printf("Memory allocation is failed");
         exit(1);
    }
    new_node->val = value;
    new_node->next = NULL;
    return new_node;
}
struct Node* insertAthead(struct Node* head,int value)
{
    struct Node* new_node = createNode(value);
       new_node->next = head;
       return new_node;
}
struct Node* insertAtTail(struct Node* head,int value)
{
    struct Node* new_node = createNode(value);
     if(!new_node)
    {
        printf("memory allocation is failed\n");
        return head;
    }
    struct Node* temp = head;
    while(temp->next!=NULL)
    {
       temp = temp->next;
    }
    temp->next = new_node;
    return head;
}
struct Node* insertAtAnyindex(struct Node* head,int value ,int index)
{
    if(index==0)
    {
       head =insertAthead(head,value);
    }
    struct Node* temp = head;
    for(int i=0;i<index-1 && temp!=NULL; i++)
    {
        temp = temp->next;

    }
    if(temp==NULL)
    {
        printf("Index out of bound\n");
         return head;
    }
    struct Node * new_node = createNode(value);
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}
void displayList(struct Node * head)
{
    struct Node * temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct Node * head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);
    struct Node* fourth = createNode(40);
    head->next = second;
    second->next = third;
    third->next = fourth;
    printf("Display original list : ");
    displayList(head);
    head = insertAthead(head,60);
    printf("Display  list : ");
    displayList(head);
    head = insertAtTail(head,50);
    printf("Display original list : ");
    displayList(head);
    head = insertAtAnyindex(head,60,3);
    printf("Display original list : ");
    displayList(head);

    
}