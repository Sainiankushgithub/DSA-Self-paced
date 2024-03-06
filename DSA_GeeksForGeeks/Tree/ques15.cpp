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
bool childsum(Node*root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return true;
    }
    int sum=0;
    if(root->left!=NULL)
    {
        sum+=root->left->data;
    }
    if(root->right!=NULL)
    {
        sum+=root->right->data;
    }
    return (root->data==sum&&childsum(root->left)&&childsum(root->right));
}
int main()
{
    Node*root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->left=new Node(9);
    root->right->right=new Node(3);
    if(childsum(root))
    {
        cout<<"YES ! It's a child sum \n";
    }
    else
    {
        cout<<"NO ! It's not a child sum \n";
    }
return 0;
}