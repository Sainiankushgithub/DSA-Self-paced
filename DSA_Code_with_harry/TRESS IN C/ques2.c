#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node* createList(int val)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
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
    struct Node*root=createList(10);
    root->left=createList(20);
    root->right=createList(30);
    root->left->left=createList(40);
    root->left->left->left=createList(50);
    root->left->left->left->left=createList(60);
    root->left->right=createList(45);
    root->left->left->right=createList(75);
    Traversal(root);
    return 0;
}