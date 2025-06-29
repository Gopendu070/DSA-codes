#include<iostream>
#include<malloc.h>
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

void preOrder(struct tree *ptr){
    if(ptr!=NULL){
        cout<<ptr->data<<" ";
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}
void postOrder(struct tree *ptr){
    if(ptr!=NULL){
        postOrder(ptr->left);
        postOrder(ptr->right);
        cout<<ptr->data<<" ";
    }
}
void inOrder(struct tree *ptr){
    if(ptr!=NULL){
        inOrder(ptr->left);
        cout<<ptr->data<<" ";
        inOrder(ptr->right);
    }
}

int main(){
    struct tree *root, *p1, *p2, *p11, *p12, *p21;
    root=createNode(17);
    p1=createNode(12);   
        p11=createNode(11);   p12=createNode(18);
    p2=createNode(25); 
        p21=createNode(21);
    
    root->left=p1;
    root->right=p2;

    p1->left=p11;
    p1->right=p12;

    p2->left=p21;
    //      _17_
    //     /     \
    //    12     25
    //   / \     /
    // 11   18  21
    
    preOrder(root);
     cout<<endl;
    postOrder(root);
     cout<<endl;
    inOrder(root);
}
