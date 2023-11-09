// PRINT LEFT VIEW OF A BINARY TREE 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int maxlevel=0;
void Left(Node*root,int level)
{
    if(root==NULL)
    {
        return;
    }
    if(maxlevel<level)
    {
        cout<<root->data<<" ";
        maxlevel=level;
    }
    Left(root->left,level+1);
    Left(root->right,level+1);
}
void LeftView(Node*root)
{
    Left(root,1);
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(8);
    root->left->right=new Node(7);
    root->left->right->left=new Node(9);
    root->left->right->right=new Node(15);
    root->right->right=new Node(6);
    LeftView(root);
return 0;
}