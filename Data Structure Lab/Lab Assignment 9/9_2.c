/*   In addition to the 9.1, perform the following menu driven operations on BST.
i. insert an element to the BST
ii. display the largest element
iii. display the smallest element
iv. height of a node
v. count number of leaf nodes  */
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
struct Node
{
    int data;
    struct Node*left,*right;
};
struct Node*Create_Node(int x)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct Node*Insert_BST(struct Node*root,int x)
{
    if(root==NULL)
    {
        return Create_Node(x);
    }
    else if(root->data>x)
    {
        root->left=Insert_BST(root->left,x);
    }
    else
    {
        root->right=Insert_BST(root->right,x);
    }
    return root;
}
int Largest(struct Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}
int main()
{
    struct Node*root=NULL;
    printf("\tMENU BASED : \n");
    printf("Press 1 for Insert an element\n");
    printf("Press 2 for Displaying the Largest Element\n");
    printf("Press 3 for Displaying the smallest Element\n");
    printf("Press 4 for Height of the BST\n");
    printf("Press 5 for Count of the Leaf Node\n");
    printf("Press 6 for Displaying in the Sorted Order\n");
    printf("Press 7 for Exit\n");
    int choice;
    do
    {
        printf("Enter the choice :\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                printf("Enter the element to be inserted \n");
                int x;
                scanf("%d",&x);
                root=Insert_BST(root,x);
                printf("SuccessFully Inserted\n");
                break;
            }
            case 2:
            {
                
            }
        }
    } while (choice!=6);
    
    return 0;
}