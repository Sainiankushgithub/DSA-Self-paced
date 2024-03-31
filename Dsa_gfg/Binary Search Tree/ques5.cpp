// MAXIMUM AND MINIMUM ELEMENT IN BINARY SEARCH TREE
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void LevelOrderTraversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        cout<<"\n";
    }
}
Node*Create_BST(Node*root,int x)
{
    if(root==NULL)
    {
        return new  Node(x);
    }
    else if(root->data>x)
    {
        root->left=Create_BST(root->left,x);
    }
    else
    {
        root->right=Create_BST(root->right,x);
    }
    return root;
}
int maxele(Node*root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else if(root->right==NULL)
    {
        return root->data;
    }
    else
    {
       return maxele(root->right);
    } 
}
int minele(Node*root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    else if(root->left==NULL)
    {
        return root->data;
    }
    else
    {
       return minele(root->left);
    } 
}
int main()
{
    Node*root=NULL;
    int h;
    cout<<"Enter the total height of the BST \n";
    cin>>h;
    cout<<"Enter the data of the BST \n";
    for(int i=0;i<h;i++)
    {
        int x;
        cin>>x;
        root=Create_BST(root,x);
    }
    cout<<"Displaying your BST \n";
    LevelOrderTraversal(root);
    cout<<"Maimum : "<<maxele(root)<<"\n"<<"Minimum : "<<minele(root);
    return 0;
}