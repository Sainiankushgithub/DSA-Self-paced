// CHECK FOR THE BST USING THE INORDER TRAVERSAL 
#include<bits/stdc++.h>
using namespace std;
int count=0;
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
Node *InsertNode(Node *root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    else if (root->data > x)
    {
        root->left = InsertNode(root->left, x);
    }
    else
    {
        root->right = InsertNode(root->right, x);
    }
    return root;
}
void Traversal(Node *root)
{
    if (root != NULL)
    {
        Traversal(root->left);
        cout << root->data << " ";
        Traversal(root->right);
    }
}

int main()
{
    Node *root = NULL;
    int node;
    cout << "Enter the number of nodes in the binary tree \n";
    cin >> node;
    cout << "Enter the Binary search data according to your node \n";
    for (int i = 0; i < node; i++)
    {
        int x;
        cin >> x;
        root = InsertNode(root, x);
    }
    cout << "Displaying your data \n";
    Traversal(root);
    return 0;
}