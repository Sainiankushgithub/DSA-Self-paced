#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left, *right;
};
struct Node *create_node(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}
struct Node *create_BST(struct Node *root, int x)
{
    if (root == NULL)
    {
        return create_node(x);
    }
    else if (root->data > x)
    {
        root->left = create_BST(root->left, x);
    }
    else
    {
        root->right = create_BST(root->right, x);
    }
    return root;
}
void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
int main()
{
    struct Node *root = NULL;
    int h;
    printf("Enter the total size of the tree \n");
    scanf("%d", &h);
    printf("Enter your elements \n");
    for (int i = 0; i < h; i++)
    {
        int x;
        scanf("%d", &x);
        root = create_BST(root, x);
    }
    printf("Displaying your data \n");
    inorderTraversal(root);
    return 0;
}