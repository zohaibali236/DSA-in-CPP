#include <iostream>
using namespace std;

struct Node
{
    Node *left;
    int data;
    Node *right;
};

Node *addnode(int item)
{
    Node *node = new Node();

    node->left = nullptr;
    node->data = item;
    node->right = nullptr;
}

Node *getLastLeftElement(Node *root)
{
    
    root = root->left;

    while(root != nullptr)
    {
        getLastLeftElement(root->right);
    }
}

Node *deleteNode(Node *root, int item)
{
    if(root == nullptr)
    {
        return nullptr;
    }
    else if(item > root->data)
    {
        root->right = deleteNode(root->right, item);
    }
    else if(item < root->data)
    {
        root->left = deleteNode(root->left, item);
    }
    else
    {
        if(root->left == nullptr && root->right == nullptr)
        {
            free(root);
            root = nullptr;
        }
        else if(root->right == nullptr)
        {
            Node *temp = root;
            root = root->left;
            delete(temp);
        }
        else if(root->left == nullptr)
        {
            Node *temp = root;
            root = root->right;
            delete(temp);
        }
        else
        {
            Node *temp = getLastLeftElement(root);

            root->data = temp->data;
            deleteNode(temp, temp->data);
        }
    }
    return root;
}