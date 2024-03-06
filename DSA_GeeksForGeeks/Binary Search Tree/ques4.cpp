// INSERT A ELEMENT IN A BINARY SEARCH TREE USING ITERATIVE METHOD  
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node *CreateBST(struct Node *root, int x)
{
    struct Node *temp = new Node(x);
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
// ITERATION METHOD 
Node*Insert_node(Node*root,int x)
{
    Node*curr=root;
    Node*parent=NULL;
    while(curr!=NULL)
    {
        parent=curr;
        if(curr->data>x)
        {
            curr=curr->left;
        }
        else
        {
            curr=curr->right;
        }
    }
    if(parent==NULL)
    {
        return new Node(x);
    }
    if(parent->data>x)
    {
        parent->left=new Node(x);
    }
    else
    {
        parent->right=new Node(x);
    }
    return root;
}
void LevelOrederTraversal(Node *root)
{
    if (root == NULL)
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
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        cout << "\n";
    }
}
int main()
{
    // CREATING THE BINARY SEARCH TREE

    Node *root = new Node(15);
    root->left = new Node(12);
    root->left->left = new Node(11);
    root->left->right = new Node(13);
    root->right = new Node(40);
    root->right->left = new Node(30);
    root->right->right = new Node(50);
    LevelOrederTraversal(root);
    int x;
    cout<<"Enter the element to be inserted :\n";
    cin>>x;
    root=Insert_node(root,x);
    cout<<"Displaying the element after insertion :\n";
    LevelOrederTraversal(root);
    return 0;
}