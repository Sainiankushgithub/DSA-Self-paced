// SIZE OF A BINARY TREE 
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
int getsize(Node*root)
{
    if(root==nullptr)
    {
        return 0;
    }
    else
    {
        return ((getsize(root->left)+1)+(getsize(root->right)+1));
    }
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(8);
    // root->left->right=new Node(7);
    // root->left->right->left=new Node(9);
    // root->left->right->right=new Node(15);
    // root->right->right=new Node(6);
    cout<<"Total number of nodes are : "<<getsize(root)/2;
return 0;
}