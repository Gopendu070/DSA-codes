#include<iostream>
using namespace std;
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree* createNode(int input){
    struct tree *p;
    p=(struct tree*)malloc(sizeof(struct tree));
    p->data=input;
    p->left=NULL;
    p->right=NULL;
return p;
}


void inOrder(struct tree *ptr){
    if(ptr!=NULL){
        inOrder(ptr->left);
        cout<<ptr->data<<" ";
        inOrder(ptr->right);
    }
}
bool isBST(struct  tree* currRoot){
    static struct tree *prev = NULL;     //*static*: once it is changed then it'll not be again NULL for the next call

    if(currRoot!=NULL){                     // if (root node != leafe node)
    
        if(isBST(currRoot->left)==false){    //if left-sub-tree of currRoot isn't a BST then the whole tree will not be a BST
            return false;
        }
        if(prev!=NULL && currRoot->data < prev->data){    // prev will be NULL for the very first call  
            return false;
        }
        prev = currRoot;
        return isBST(currRoot->right);
    }
    else if(currRoot == NULL){      //It means a single node tree is BST
        return true;
    }
}
int main(){
    struct tree *root, *p1, *p2, *p11, *p12, *p21;
    root=createNode(7);
    p1=createNode(4); 
        p11=createNode(2);   p12=createNode(5);
    p2=createNode(11); 
        p21=createNode(9);
    
    root->left=p1;
    root->right=p2;

    p1->left=p11;
    p1->right=p12;

    p2->left=p21;
    //      _7_
    //     /   \
    //    4     11
    //   / \    /
    //  2   5  9
    
    inOrder(root);
    if(isBST(root))
       { cout<<"\nIt is a BST(Binary Search Tree)."; }
    else
       {  cout<<"\nIt is not a BST(Binary Search Tree)."; }
}