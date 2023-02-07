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
    Node *ptr = new Node();

    ptr->left = nullptr;
    ptr->data = item;
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

void preorder(Node *root)
{
    if(root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if(root == nullptr)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if(root == nullptr)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


void mirror(Node *root)
{
    if(root == nullptr)
    {
        return;
    }

    Node *temp = root->right;

    root->right = root->left;
    root->left = temp;

    mirror(root->left);
    mirror(root->right);
    
}

int main()
{
    Node *rootptr = nullptr;
    
    rootptr = insert(rootptr, 15);
    rootptr = insert(rootptr, 10);
    rootptr = insert(rootptr, 20);
    rootptr = insert(rootptr, 19);
    rootptr = insert(rootptr, 25);
    rootptr = insert(rootptr, 8);
    rootptr = insert(rootptr, 12);

    preorder(rootptr);
    cout << endl;
    inorder(rootptr);
    cout << endl;
    postorder(rootptr);
    cout << endl;

    mirror(rootptr);

    cout << endl;
    preorder(rootptr);
    cout << endl;
    inorder(rootptr);
    cout << endl;
    postorder(rootptr);
    cout << endl;

    return 0;
}