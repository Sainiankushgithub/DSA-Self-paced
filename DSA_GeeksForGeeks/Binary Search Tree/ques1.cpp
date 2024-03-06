// RECURSIVE SEARCH IN BINARY SEARCH TREE 

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node*left;
    Node*right;
    Node(int x)
    {
        key=x;
        left=right=NULL;
    }
};
bool search(Node*root,int x)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->key==x)
    {
        return true;
    }
    else if (root->key>x)
    {
        return search(root->left,x);
    }
    else
    {
        return search(root->right,x);
    }
}
int main()
{
    Node*root=new Node(15);
    root->left=new Node(5);
    root->left->left=new Node(3);
    root->right=new Node(20);
    root->right->left=new Node(18);
    root->right->right=new Node(30);
    int x;
    cout<<"Enter the element to be searched\n";
    cin>>x;
    if(search(root,x))
    {
        cout<<"Element found \n";
    }
    else
    {
        cout<<"Element not found \n";
    }
return 0;
}