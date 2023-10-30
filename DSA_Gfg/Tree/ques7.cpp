// HEIGHT OF A BINARY TREE 
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
    {                                    // NO DONE YET !!!
        
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
    int k;
    cout<<"Enter the kth node number to print all the kth element :\n";
    cin>>k;
   printkNode(root,k);
return 0;
}