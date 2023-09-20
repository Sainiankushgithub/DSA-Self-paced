
// THIS CODE INCLUDE THE DOUBLY LINKED LIST PART -2 

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*head=NULL;
struct Node*create_list(int val)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    if(temp==NULL)
    {
        printf("Memory Allocation failed :\n");
        exit(1);
    }
    if(head==NULL)
    {
        head=temp;
        head->next=head;
        head->prev=head;
        return head;
    }
    else
    {
        struct Node*curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev=curr;
        temp->next=head;
        head->prev=temp;
    }
    return head;
}
int main()
{
    return 0;
}