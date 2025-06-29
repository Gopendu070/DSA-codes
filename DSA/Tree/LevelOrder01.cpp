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
int height(tree* root){
    if(root==NULL){
        return 0;
    }
    int H= max(height(root->left), height(root->right));
    return H+1;
}

void printByLevel(tree *root, int level){
    if(root==NULL){
        return;
    }
    else  if(level==1){
        cout<<root->data<<" ";
    }
    else if(level>1){
    printByLevel(root->left, level-1);    // if the level=2 then we are moving root to the left and passing level-1 , untill level == 1
    printByLevel(root->right, level-1);    // if the level=2 then we are moving root to the right and passing level-1 , untill level == 1
    
    }

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

   for (int i=1; i <= height(root); i++){
    cout<<"\nAt level "<<i<<": ";
     printByLevel(root, i);
     
   }
}
