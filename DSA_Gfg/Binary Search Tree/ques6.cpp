// FLOOR OF A BINARY SERCH TREE 
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
Node*NearestMin(Node*root,int ele)
{
    Node*res=NULL;
    while(root!=NULL)
    {
        if(root->data==ele)
        {
            return root;
        }
        else if(root->data>ele)
        {
            root=root->left;
        }
        else
        {
            res=root;
            root=root->right;
        }
    }
    return res;
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
    int ele;
    cout<<"Enter the Element to find the nearest minimum of the Binary tree \n";
    cin>>ele;
    Node*curr=NearestMin(root,ele);
    cout<<"Nearest Minimum is : "<<curr->data;
return 0;
}