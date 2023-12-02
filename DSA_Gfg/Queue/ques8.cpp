// IMPLEMENTATION OF QUEUE 
#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int front;
    int rear;
    int capacity;
    int *que;
}q;
void Push(int x)
{
    if(q.rear==q.capacity-1)
    {
        printf("Queue is full \n");
        return;
    }
    else if(q.front==-1&&q.rear==-1)
    {
        q.front++;
        q.rear++;
        q.que[q.rear]=x;
    }
    else
    {
        q.rear++;
        q.que[q.rear]=x;
    }
}
void pop()
{
    if(q.front==-1)
    {
        printf("Queue underflow \n");
        return;
    }
    else if(q.front==q.rear)
    {
        printf("%d deleted element \n",q.que[q.front]);
        q.front=-1;
        q.rear=-1;
    }
    else
    {
        printf("%d deleted element \n",q.que[q.front]);
        q.front++;
    }
}
void Display()
{
    if(q.front==-1&&q.rear==-1)
    {
        printf("Queue is empty()\n");
        return;
    }
    for(int i=q.front;i<=q.rear;i++)
    {
        printf("%d ",q.que[i]);
    }
    printf("\n");
}
int main()
{
    q.front=-1;
    q.rear=-1;
    q.capacity=6;
    q.que=new int[q.capacity];
    printf("1.ENQUEUE()\n2.DEQUEUE()\n3.Display()\n4.PEEK()\n");
    int choice;
    do
    {
        printf("Enter the choice :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int x;
                printf("Enter the element to Enqueue\n");
                scanf("%d",&x);
                Push(x);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                printf("Displaying your queueu\n");
                Display();
                break;
            }
            case 4:
            {
                printf("Exit\n");
                exit(1);
                break;
            }
            default:
            {
                printf("Invalid entry\n");
                break;
            }
        }
    } while (choice!=4);
    
return 0;
}