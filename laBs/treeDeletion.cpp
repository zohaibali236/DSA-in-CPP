#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *addnode(int data)
{
    Node *ptr = new Node();
    ptr->left = nullptr;
    ptr->data = data;
    ptr->right = nullptr;

    return ptr;
}

Node *insert(Node *root, int data)
{
    if(root == nullptr)
    {
        root = addnode(data);
    }
    else if(data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else root->left = insert(root->left, data);
    
    return root;
}
Node *getLastNode(Node *root)
{
    root = root->left;

    while(root->right != nullptr)
    {
        root = root->right;
    }

    return root;
}
Node *deleteNode(Node *root, int key)
{
    if(root == nullptr)
    {
        return nullptr;
    }

    if(root->data == key)
    {
        if(root->left == nullptr && root->right == nullptr)
        {
            delete(root);

            root = nullptr;
        }
        else if(root->left == nullptr && root->right != nullptr)
        {
            Node *temp = root;

            delete(temp);

            root = root->right;
        }
        else if(root->right == nullptr && root->left != nullptr)
        {
            Node *temp = root;
            delete(temp);

            root = root->left;
        }
        else
        {
            Node *last = getLastNode(root);

            root->data = last->data;

            root->left = deleteNode(root->left, last->data);

        }
    }
    else if(key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else root->left = deleteNode(root->left, key);

    return root;
}

void inOrder(Node *root)
{
    if(root == nullptr)
    {
        cout << 123123<<endl;
        return;
}
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    Node *root = nullptr;

    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 3);

    inOrder(root);

    root = deleteNode(root, 1);
    inOrder(root);
    
    return 0;
}