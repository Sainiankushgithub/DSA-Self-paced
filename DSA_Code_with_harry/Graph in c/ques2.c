// ADJANCENCY  IN LIST DIRECTED GRAPH
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node* addEdge(struct Node*head,int vertex2)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=vertex2;
    temp->next=head;
    return temp;
}
void printAdjancencyList(struct Node*array[],int vertices)
{
    for(int i=0;i<vertices;i++)
    {
        printf("Adjancency List for vertex %d :",i);
        struct Node*curr=array[i];
        while(curr!=NULL)
        {
            printf("%d->",curr->data);
            curr=curr->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int vertices;
    printf("Enter the numbers of vertices\n");
    scanf("%d",&vertices);
    struct Node*array[vertices];
    for(int i=0;i<vertices;i++)
    {
        array[i]=NULL;
    }
    int edges;
    printf("Enter then number of Edges \n");
    scanf("%d",&edges);
    for(int i=1;i<=edges;i++)
    {
        int vertex1,vertex2;
        printf("Enter the Edge (vertex%d and vertex%d : )\n" ,i,i+1);
        scanf("%d%d",&vertex1,&vertex2);
        array[vertex1]=addEdge(array[vertex1],vertex2);
    }
    printf("Displaying your Adjancnecy  in List]\n");
    printAdjancencyList(array,vertices);
    return 0;
}