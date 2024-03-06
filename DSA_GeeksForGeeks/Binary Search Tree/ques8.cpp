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

Node *getSuccessor(Node *root)
{
    Node *curr = root;
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

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

Node *DelNode(Node *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data > x)
    {
        root->left = DelNode(root->left, x);
    }
    else if (root->data < x)
    {
        root->right = DelNode(root->right, x);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete (root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete (root);
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root);
            root->data = succ->data;
            root->right = DelNode(root->right, succ->data);
        }
        return root;
    }
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
    int ele;
    cout << "\nEnter the Element to be deleted \n";
    cin >> ele;
    root = DelNode(root, ele);
    cout << "Displaying your data After Deletion \n";
    Traversal(root);
    return 0;
}
