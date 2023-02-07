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
void traverse_Inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    traverse_Inorder(root->left);
    cout << root->data << " ";
    traverse_Inorder(root->right);
}
void traverse_Preorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    traverse_Preorder(root->left);
    traverse_Preorder(root->right);
}
void traverse_Postorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    traverse_Postorder(root->left);
    traverse_Postorder(root->right);
    cout << root->data << " ";
}

void mirror(Node *root)
{
    if(root == nullptr) return;

    Node *temp = nullptr;
    temp = root->right;
    root->right = root->left;
    root->left = temp;

    mirror(root->left);
    mirror(root->right);

}

int main()
{
    struct Node *rootptr = NULL;

    rootptr = addnode(1);
    rootptr->left = addnode(2);
    rootptr->right = addnode(3);
    rootptr->left->left = addnode(4);
    rootptr->left->right = addnode(5);
    rootptr->right->left = addnode(6);
    rootptr->right->right = addnode(7);

    traverse_Preorder(rootptr);
    cout << endl;
    traverse_Inorder(rootptr);
    cout << endl;
    traverse_Postorder(rootptr);

    mirror(rootptr);
    cout << endl;
    cout << endl;

    traverse_Preorder(rootptr);
    cout << endl;
    traverse_Inorder(rootptr);
    cout << endl;
    traverse_Postorder(rootptr);

    return 0;
}