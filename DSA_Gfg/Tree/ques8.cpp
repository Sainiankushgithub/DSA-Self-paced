// MAXIMUM BINARY TREE 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
int MaxBinaryTree(Node*root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else
    {
        int leftroot=MaxBinaryTree(root->left);
        int rightroot=MaxBinaryTree(root->right);
        return max(root->data,max(leftroot,rightroot));
    }
}
int main()
{
    /* FOR ROOT IS EQUAL TO NULL */
    // Node*root=NULL;

    Node*root=new Node(10);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(80);
    root->left->left->right=new Node(70);
    root->right->left=new Node(60);
    root->right->right=new Node(20);
    cout<<"Maximum value of the Binary tree is : "<<MaxBinaryTree(root);
return 0;
}