// IMPLEMENTATION OF QUEUE USING LINEKD LIST 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*front=NULL;
struct Node*rear=NULL;
void Enqueue(int x)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void Dequeue()
{
    if(front==NULL&&rear==NULL)
    {
        printf("Queue is empty()\n");
        return;
    }
    else
    {
        printf("Dequeued Node : %d \n",front->data);
        struct Node*temp=front;
        front=front->next;
        free(temp);
    }
}
void display()
{
    if(rear==NULL&&rear==NULL)
    {
        printf("Queue is empty()\n");
        return;
    }
    else
    {
        struct Node*temp=front;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    printf("1.Enqueue()\n2.Dequeue()\n3.Display()\n4.exit()\n");
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
                printf("Enter the Element to be enqueued\n");
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
                display();
                break;
            }
            case 4:
            {
                printf("Exited\n");
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