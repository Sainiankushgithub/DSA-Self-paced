// INSERT A ELEMENT IN A BINARY SEARCH TREE 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
Node*CreateBST(struct Node*root,int x)
{
    struct Node*temp=new Node(x);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void LevelOrederTraversal(Node*root)
{
    if(root==NULL)
    {
        return;
    }
}
int main()
{
    // CREATING THE BINARY SEARCH TREE 

    Node*root=new Node(15);
    root->left=new Node(12);
    root->left->left=new Node(11);
    root->left->right=new Node(13);
    root->right=new Node(40);
    root->right->left=new Node(30);
    root->right->right=new Node(50);

return 0;
}