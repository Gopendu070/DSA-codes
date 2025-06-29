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


// Diameter= longest possible path between any node (the path may or may not be passing through the root)
int diameterOfTree(struct tree *root, int* maxDiametere){
        if (root == NULL)  
           return 0;  
        
            /* compute  height of each subtree */  
            int lheight = diameterOfTree(root->left, maxDiametere);  
            int rheight = diameterOfTree(root->right, maxDiametere);  
            *maxDiametere=max(*maxDiametere, lheight+rheight);
            return 1+max(lheight, rheight); 
            

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
    int diametere=0;
    int h=diameterOfTree(root, &diametere);   //it returns the height of tree but we are passing the diametere by reference so it could be changed
   cout<<"\n The Diametere of the tree is "<<diametere;
}