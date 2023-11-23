// DELETION IN BINARY SEARCH TREE 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*left,*right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
Node*InsertNode(Node*root,int x)
{
    if(root==NULL)
    {
        return new Node(x);
    }
    else if(root->data>x)
    {
        root->left=InsertNode(root->left,x);
    }
    else
    {
        root->right=InsertNode(root->right,x);
    }
    return root;
}
int main()
{
    Node*root=NULL;
    int height;
    cout<<"Enter the height of the binary tree \n";
    cin>>height;
    cout<<"Enter the Binary search data according to your height \n";
    for(int i=0;i<height;i++)
    {
        int x;
        cin>>x;
        root=InsertNode(root,x);
    }
    // written there left !
    
return 0;
}