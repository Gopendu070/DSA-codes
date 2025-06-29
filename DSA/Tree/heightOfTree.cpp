#include <iostream>
#include <malloc.h>
#include <algorithm>
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

/* the height of a binary tree is equal to the 
largest number of edges from the root to the most distant leaf node.*/
int heightOfTree(struct tree *root){
        
        if (root == NULL)  
           return 0;  
        else  
        {  
            /* compute  height of each subtree */  
            int lheight = heightOfTree(root->left);  
            int rheight = heightOfTree(root->right);  
               
            return max(lheight, rheight)+1; 
}
}

int main()
{
    struct tree *root, *p1, *p11, *p111, *p112, *p1121, *p12, *p122, *p2, *p21;
    root = createNode(7);
    p1 = createNode(4);
      p11 = createNode(2);
        p111 = createNode(1);
        p112 = createNode(3);
          p1121=createNode(2);
      p12 = createNode(5);
        p122 = createNode(6);
    
    p2 = createNode(11);
      p21 = createNode(9);

    root->left = p1;
    root->right = p2;

    p1->left = p11;
    p1->right = p12;

    p11->left = p111;
    p11->right = p112;

    p112->left=p1121;

    p12->right = p122;

    p2->left = p21;

    //      _7_
    //     /   \
    //    4     11
    //   / \    /
    //  2   5  9
   //  / \   \
   // 1   3   6
   //    /  
   //   2
    
    inOrder(root);
   cout<<"\n The height of the tree is "<<heightOfTree(root);
}