// DIAMETER OF A BINARY TREE 
#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x)
    {
        val=x;
        left=NULL;
        right=NULL;
    }
};
void inorderTraversal(struct TreeNode*root)
{
    if(root!=NULL)
    {
        inorderTraversal(root->left);
        cout<<root->val<<" ";
        inorderTraversal(root->right);
    }
}
int height(struct TreeNode*root)
{
    
}
int main()
{
    struct TreeNode*root=new TreeNode(10);
    root->left=new TreeNode(20);
    root->right= new TreeNode(30);
    inorderTraversal(root);


return 0;
}