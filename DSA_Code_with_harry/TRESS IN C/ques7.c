// preorderTraversal TRAVERSAL BY NON-RECURSION
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createList(int val)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
}
// THIS IS Postorder TRAVERSAL
void preorderTraversal(struct Node *root)
{
    struct Node*st[MAX];
    int top=-1;
    jump:while(root!=NULL)
    {
        if(root->right!=NULL)
        {
            top++;
            st[top]=root->right;
        }
        top++;
        st[top]=root;
        root=root->left;
    }
    if(root==NULL&&top==-1)
    {
        return;
    }
    else
    {
        root=st[top];
        top--;
    }
    if(root->right!=NULL&&st[top]==root->right)
    {
        st[top]=root;
        root=root->right;
        goto jump;
    }
    else
    {
        printf("%d ",root->data);
        root=NULL;
        goto jump;
    }
}
int main()
{
    struct Node *root = createList(10);
    root->left = createList(20);
    root->right = createList(30);
    root->left->left = createList(40);
    root->left->right = createList(50);
    root->left->right->left = createList(70);
    root->left->right->right = createList(80);
    root->right->right = createList(60);
    printf("\n preorder Traversal :\n");
    preorderTraversal(root);
    return 0;
}