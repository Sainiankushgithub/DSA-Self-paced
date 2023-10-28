// SIZE OF A BINARY TREE  THIS IS MY CODE IMPLEMENTED BY MYSELF
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *rigt;
};
struct Node *createNode(int val)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->left = NULL;
    temp->rigt = NULL;
    return temp;
}
int getsize(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return ((getsize(root->left) + 1) + (getsize(root->rigt) + 1));
    }
}
int main()
{
    struct Node *root = createNode(10);
    // TEST CASE : 1
    /*
    root->left=createNode(20);
     root->rigt=createNode(30);
     root->left->left=createNode(8);
     root->left->rigt=createNode(7);
     root->left->rigt->left=createNode(9);
     root->left->rigt->rigt=createNode(15);
     root->rigt->rigt=createNode(6);
     */
    //    TEST CASE : 2

    /*
    root->rigt = createNode(6);
    root->rigt->left = createNode(2);
    root->rigt->rigt = createNode(4);
    root->rigt->rigt->left = createNode(3);

    */
    // TEST CASE 3
    root->left=createNode(4);
    root->left->rigt=createNode(5);
    printf("Total nodes are : %d ", getsize(root) / 2);
    return 0;
}