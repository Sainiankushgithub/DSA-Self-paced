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
Node*NearestMax(Node*root,int ele)
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
            res=root;
            root=root->left;
        }
        else
        {
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
    cout<<"Enter the Element to find the nearest Maximum of the Binary tree \n";
    cin>>ele;
    Node*curr=NearestMax(root,ele);
    cout<<"Nearest Minimum is : "<<curr->data;
return 0;
}