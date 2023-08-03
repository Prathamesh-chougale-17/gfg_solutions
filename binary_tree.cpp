#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;
    node(int var)
    {
        data = var;
        right = NULL;
        left = NULL;
    }
};
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int height(node *root)
{
    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
}
int main()
{
    node *root=new node(10);
    root->left=new node(12);
    root->left->left=new node(1);
    root->left->right=new node(4);
    root->right=new node(8);
    root->right->right=new node(9);
    root->right->right->left=new node(14);
    root->right->right->right=new node(4);
    inorder(root);
    cout<<endl;
    cout<<height(root);
    return 0;
}