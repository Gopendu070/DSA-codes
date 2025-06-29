#include <iostream>
#include <malloc.h>
#include<queue>
using namespace std;


struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree* createNode(int input)
{
    struct tree *p;
    p = (struct tree *)malloc(sizeof(struct tree));
    p->data = input;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void leftViewUtil(struct tree *root, int level, int *max_level);  //Prototype declaration**


void leftViewUtil(struct tree *root, int level, int *max_level){   //integer pointer max_level is storing the address

    if(root==NULL)   {  return; }     //while root==NULL then return to the preveious call 

            if(*max_level < level)
            {
                cout<<root->data<<" ";
                *max_level = level;
            }
            
    leftViewUtil(root->left, level+1, max_level);  // move to the left, the next level and increment 'level' by 1
    leftViewUtil(root->right, level+1, max_level);  // move to the right, the next level and increment 'level' by 1

}
void leftView(tree *root){
    int max_level=0;
    int level=1;
    leftViewUtil(root, level, &max_level );   //calling max_level by refrance
}

               /*      To print the RIGHT VIEW just call the function for the root->right first the for root->l        */          

int main(){
     struct tree *root, *p1, *p11,  *p112, *p12, *p122, *p2, *p21;
    root = createNode(7);
    p1 = createNode(4);
    p11 = createNode(2);
    p12 = createNode(5);
    
    p112 = createNode(3);
    p122 = createNode(6);
    p2 = createNode(11);
    p21 = createNode(9);

    root->left = p1;
    root->right = p2;

    p1->left = p11;
    p1->right = p12;

   
    p11->right = p112;

    p12->right = p122;

    p2->left = p21;

    //      _7_           ---> level= 1
    //     /   \
    //    4     11        ---> level= 2
    //   / \    /
    //  2   5  9          ---> level= 3
   //    \   \
   //     3   6           ---> level= 4
   leftView(root);
   
    return 0;
}