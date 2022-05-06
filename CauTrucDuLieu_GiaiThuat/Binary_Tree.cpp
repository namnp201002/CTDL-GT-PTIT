#include <iostream>

using namespace std;

struct NODE
{
    int data;
    struct NODE *left;
    struct NODE *right;
};

typedef NODE *Tree;

NODE *createNode(int data)
{
    NODE *p = new NODE;
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void createTree(Tree &root)
{
    root = NULL;
}

void AddNode(Tree &root, NODE *p)
{
    if (root)
    {
        if (root->data == p->data)
            return;
        else if (p->data < root->data)
            AddNode(root->left, p);
        else
            AddNode(root->right, p);
    }
    else
    {
        root = p;
    }
}

void NLR(Tree &Root)
{
    if (Root != NULL)
    {
        cout << Root->data << "  ";
        NLR(Root->left);
        NLR(Root->right);
    }
}

int main()
{
    Tree myTree;
    createTree(myTree);

    AddNode(myTree, createNode(9));
    AddNode(myTree, createNode(2));
    AddNode(myTree, createNode(8));
    AddNode(myTree, createNode(6));
    AddNode(myTree, createNode(1));
    AddNode(myTree, createNode(5));
    AddNode(myTree, createNode(7));
    AddNode(myTree, createNode(10));
    AddNode(myTree, createNode(3));
    AddNode(myTree, createNode(12));
    AddNode(myTree, createNode(4));

    NLR(myTree);

    return 0;
}