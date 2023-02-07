#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *addnode(int item)
{
    Node *addnode = new Node();

    addnode->data = item;
    addnode->left = NULL;
    addnode->right = NULL;

    return addnode;
}

Node *Insert(Node *root, int item)
{
    if(root == NULL)
    {
        root = addnode(item);
    }
    else if(item < root->data)
    {
        root->left = Insert(root->left, item);
    }
    else root->right = Insert(root->right, item);

    return root;
}

void Delete(Node *root, int item)
{
    if(root == nullptr)
    {
        return;
    }
    else if()
}

int main()
{
    Node *rootptr = NULL;

    rootptr = Insert(rootptr, 15);
    rootptr = Insert(rootptr, 10);
    rootptr = Insert(rootptr, 20);
    rootptr = Insert(rootptr, 25);
    rootptr = Insert(rootptr, 8);
    rootptr = Insert(rootptr, 12);

    return 0;
}