// IMPLEMENTING THE DE queue 
#include<stdio.h>
#include<stdlib.h>
struct DEQUE
{
    int Front,rear;
    int capacity;
    int *DEQue;
}q;
void EnqueueFront(int x)
{
    if((q.Front==0&&q.rear==q.capacity-1)||(q.Front==q.rear+1))
    {
        printf("Queue is Full\n");
    }
    else if(q.Front==-1&&q.rear==-1)
    {
        q.Front=q.rear=0;
        q.DEQue[q.rear]=x;
    }
    else if(q.Front==0)
    {
        q.Front=q.capacity-1;
        q.DEQue[q.Front]=x;
    }
    else
    {
        q.Front--;
        q.DEQue[q.Front]=x;
    }
}
void EnqueueRear(int x)
{
    if((q.Front==0&&q.rear==q.capacity-1)||(q.Front==q.rear+1))
    {
        printf("Queue is Full\n");
    }
    else if(q.Front==-1&&q.rear==-1)
    {
        q.Front=q.rear=0;
        q.DEQue[q.rear]=x;
    }
    else if(q.rear==q.capacity-1)
    {
        q.rear=0;
        q.DEQue[q.rear]=x;
    }
    else
    {
        q.rear++;
        q.DEQue[q.rear]=x;
    }
}
void DequeueFront()
{
    if(q.Front==-1&&q.rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(q.Front==q.rear)
    {
        printf("Dequeued Element is : %d\n",q.DEQue[q.Front]);
        q.Front=q.rear=-1;
    }
    else if(q.Front==q.capacity-1)
    {
        printf("Dequeued Element is : %d\n",q.DEQue[q.Front]);
        q.Front=0;
    }
    else
    {
        printf("Dequeued Element is : %d\n",q.DEQue[q.Front]);
        q.Front++;
    }
}
void DequeueRear()
{
    if(q.Front==-1&&q.rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(q.Front==q.rear)
    {
        printf("Dequeued Element is : %d\n",q.DEQue[q.rear]);
        q.Front=q.rear=-1;
    }
    else if(q.rear==0)
    {
        printf("Dequeued Element is : %d\n",q.DEQue[q.rear]);
        q.rear=q.capacity-1;
    }
    else
    {
        printf("Dequeued Element is : %d\n",q.DEQue[q.rear]);
        q.rear--;
    }
}
int main()
{
    q.Front=-1;
    q.rear=-1;
    q.capacity=5;
    q.DEQue=(int*)malloc(q.capacity*sizeof(int));
    printf("1.EnqueueFront()\n2.EnqueueRear()\n4.DequeueFront()\n5.DequeueRear()\n6.Display()\n7.Exit()\n");
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
                EnqueueFront(x);
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