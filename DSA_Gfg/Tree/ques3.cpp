// TREE IMPLEMENTATION ---> BINARY TREE 
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

// INORDER  TRAVERSAL 

void InorderTraversal(struct Node*root)
{
    if(root!=NULL)
    {
    InorderTraversal(root->left);
    cout<<root->data<<"\t";
    InorderTraversal(root->right);
    }
}
int main()
{
    Node*root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->left->right->left=new Node(70);
    root->left->right->right=new Node(80);
    root->right=new Node(30);
    root->right->right=new Node(60);
    cout<<"Pre order traversal :\n";
    InorderTraversal(root);
return 0;
}