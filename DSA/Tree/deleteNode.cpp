#include <iostream>
#include <malloc.h>
using namespace std;
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *createNode(int input)
{
    struct tree *p;
    p = (struct tree *)malloc(sizeof(struct tree));
    p->data = input;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void inOrder(struct tree *ptr)
{
    if (ptr != NULL)
    {
        inOrder(ptr->left);
        cout << ptr->data << " ";
        inOrder(ptr->right);
    }
}

bool checkRecurse(struct tree *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else
    {
        if (root->data == key)
        {
            return true;
        }
        if (key < root->data)
        {
            return checkRecurse(root->left, key);
        }
        else
        {
            return checkRecurse(root->right, key);
        }
    }
}

struct tree *inorderPredecessor(struct tree *root)
{                                    //"inorder predecessor" is the RIGHTmost(Largest) NODE OF THE LEFT SUB-TREE
   
    root = root->left;               // jumping to the left sub-tree as the predecessor must be small

    while (root->right != NULL)          // reaching to the right-most node of the sub-tree
    { 
        root = root->right;
    }
    return root;
}

struct tree *deleteNode(struct tree *root, int value)
{

    struct tree *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL && root->data==value)
    {
        free(root);
        return NULL;
    }

    // searching for the node to be deleted
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    // deletion strategy when the node is found
    else if(value == root->data)
    {                   //here root is the node corresponding to the value to be deleted
        iPre = inorderPredecessor(root);     
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}


int main()
{
    struct tree *root, *p1, *p11, *p111, *p112, *p12, *p122, *p2, *p21;
    root = createNode(7);
    p1 = createNode(4);
    p11 = createNode(2);
    p12 = createNode(5);
    p111 = createNode(1);
    p112 = createNode(3);
    p122 = createNode(6);
    p2 = createNode(11);
    p21 = createNode(9);

    root->left = p1;
    root->right = p2;

    p1->left = p11;
    p1->right = p12;

    p11->left = p111;
    p11->right = p112;

    p12->right = p122;

    p2->left = p21;

    //      _7_
    //     /   \
    //    4     11
    //   / \    /
    //  2   5  9
   //  / \   \
   // 1   3   6

    inOrder(root);
    printf("\n");
    deleteNode(root, 2);
    inOrder(root);
}
