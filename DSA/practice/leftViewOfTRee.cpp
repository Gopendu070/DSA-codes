#include<iostream>
using namespace std;

struct tree{
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
void leftViewUtil(struct tree* root, int level, int *max_level){
    if(root==NULL){
        return;
    }
    if(*max_level < level){
        cout<<root->data<<" ";
        *max_level=level;       //max_level is updated
    }
    leftViewUtil(root->left, level+1, max_level);
    leftViewUtil(root->right, level+1, max_level);

}
void leftView(struct tree* root){
    int level=1;
    int max_level=0;
    leftViewUtil(root, level, &max_level);   // Call By Referance (passing the address of max_level)
}

int main(){
     struct tree *root, *p1, *p11,  *p112, *p12, *p122, *p2, *p21;
    root = createNode(7);
    p1 = createNode(8);
    p11 = createNode(2);
    p12 = createNode(5);
    
    p112 = createNode(13);
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
    //    8     11        ---> level= 2
    //   / \    /
    //  2   5  9          ---> level= 3
   //    \   \
   //    13   6           ---> level= 4

   leftView(root);
}