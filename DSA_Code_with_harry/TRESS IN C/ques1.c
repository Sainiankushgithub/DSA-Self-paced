#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node*CreateList(int val)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void Traversal(struct Node*root)
{
    if(root!=NULL)
    {
        Traversal(root->left);
        printf("%d ",root->data);
        Traversal(root->right);
    }
}
int main()
{
    struct Node*root=CreateList(1);
    struct Node*p1=CreateList(2);
    struct Node*p2=CreateList(3);
    root->left=p1;
    root->right=p2;
    Traversal(root);
    return 0;
}