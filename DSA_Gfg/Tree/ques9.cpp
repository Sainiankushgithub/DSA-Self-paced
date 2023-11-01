// LEVEL ORDER TRAVERSAL
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
int height(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left),height(root->right))+1;
    }
}
void printkNode(Node*root,int k)
{
    if(root==NULL)
    {
        return ;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    else
    { 
        printkNode(root->left,k-1);
        printkNode(root->right,k-1);  
    }
}
void LevelorderTraversal(Node*root)
{
    int count=0;
    int maxheight=height(root);
    while(count<maxheight)
    {
        cout<<"Roots for ";
        cout<<"Count = "<<count<<" are :\n";
        printkNode(root,count++);
        cout<<endl;
    }
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
    LevelorderTraversal(root);
return 0;
}