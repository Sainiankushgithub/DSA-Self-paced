// CIRCULAR QUEUE REPRESENTATION 
#include<stdio.h>
#include<stdlib.h>
#define N 6
struct Queue
{
    int front;
    int rear;
    int *CirQue;
}q;
void Enqueue(int x)
{
   if(q.front==-1&&q.rear==-1)
   {
    q.front=q.rear=0;
    q.CirQue[q.rear]=x;
   }
   else if((q.rear+1)%N==q.front)
   {
    printf("QUEUE IS FULL \n");
   }
   else
   {
    q.rear=(q.rear+1)%N;
    q.CirQue[q.rear]=x;
   }
}
void Dequeue()
{
    if(q.front==-1&&q.rear==-1)
    {
        printf("Queue is empty() \n");
    }
    else if(q.front==q.rear)
    {
        printf("Dequeued Element : %d\n",q.CirQue[q.front]);
        q.front=q.rear=-1;
    }
    else
    {
        printf("Dequeued Element : %d\n",q.CirQue[q.front]);
        q.front=(q.front+1)%N;
    }
}
void Display()
{
    if(q.front==-1&&q.rear==-1)
    {
        printf("Queue is empty()\n");
    }
    else
    {
        int i=q.front;
        while(i!=q.rear)
        {
            printf("%d ",q.CirQue[i]);
            i=(i+1)%N;
        }
        printf("%d\n",q.CirQue[i]);
    }
}
int main()
{
    q.front=-1;
    q.rear=-1;
    q.CirQue=(int*)malloc(N*sizeof(int));
    printf("1.Enqueue()\n2.Dequeue()\n3.Display()\n4.Exit()\n");
    int choice;
    do
    {
        printf("Enter the choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int x;
                printf("Enter the element to be inserted \n");
                scanf("%d",&x);
                Enqueue(x);
                break;
            }
            case 2:
            {
                Dequeue();
                break;
            }
            case 3:
            {
                printf("Displaying the Circular Queue Element \n");
                Display();
                break;
            }
            case 4:
            {
                exit(1);
            }
            default:
            {
                printf("Invalid Entry\n");
                break;
            }
        }
    } while (choice!=4);
    
    return 0;
}