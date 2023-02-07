#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};


Node *addnode(int item)
{
    Node *node = new Node();

    node->left = nullptr;
    node->data = item;
    node->right = nullptr;

    return node;
}

Node *insert(Node *root,int item)
{
    if(root == nullptr)
    {
        root = addnode(item);
    }
    else if(item > root->data)
    {
        root->right = insert(root->right, item);
    }
    else root->left = insert(root->left, item);

    return root;
}

void inorder(Node *root)
{
    if(root == nullptr) return;

    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
    // cout << 1;
}

int main()
{
    Node *root = nullptr;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);

    // cout << root->data;

    inorder(root);
}