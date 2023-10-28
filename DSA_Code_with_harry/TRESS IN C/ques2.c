

//   ALL TRAVERSAL IN JUST ONE CODE

#include <stdio.h>
#include <stdlib.h>
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

// THIS IS PREORDER TRAVERSAL
void PreTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        PreTraversal(root->left);
        PreTraversal(root->right);
    }
}

// THIS IS INORDER TRAVERSAL
void InTraversal(struct Node *root)
{
    if (root != NULL)
    {
        InTraversal(root->left);
        printf("%d\t", root->data);
        InTraversal(root->right);
    }
}

// THIS IS POSTORDER TRAVERSAL
void PosTraversal(struct Node *root)
{
    if (root != NULL)
    {
        PosTraversal(root->left);
        PosTraversal(root->right);
        printf("%d\t", root->data);
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
    printf("Preorder Traversal :\n");
    PreTraversal(root);
    printf("\nInorder Traversal :\n");
    InTraversal(root);
    printf("\nPostorder Traversal :\n");
    PosTraversal(root);
    return 0;
}