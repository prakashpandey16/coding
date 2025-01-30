#include<stdio.h>
#include<stdlib.h>

#define MAX 100
int queue[100];
int front = -1;
int rear = -1;

// push
void enqueue(int value)
{
    if(rear==MAX-1)
    {
        printf("queue is overflow\n");
        return;
    }
    else{
        if(front==-1)
           front = 0;

         queue[++rear] = value;
        }
}
// pop
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is underflow\n");
        return;
    }
    int value = queue[front++];
    printf("%d element is pop from Queue\n",value);

}
// display
void display()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is underflow\n");
        return;
    }
    printf("Queue elements are : ");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
}
