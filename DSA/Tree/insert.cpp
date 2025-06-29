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

bool check(struct tree *root, int key){
    if (root== NULL){
        return false;
    }
    else{
        if(root->data == key){
            return true;
        }
          if(key < root->data){
        return check(root->left, key);
        }
        else{
           return check(root->right, key);
        }
    }
  
}
void insert(struct tree* root, int key){
   
    struct tree *prev=NULL;
    int i=1;
    while(root!=NULL){
        cout<<"Loop: "<<i++<<endl;
        prev=root;
         if(root->data == key){
        cout<<key<<" Can't be inserted. Already in the BST.\n";
        return;
        }
        
        else if(key < root->data){
            root= root->left;
        }
        else {
            root= root->right;
        }
    }
    struct tree *newNode=createNode(key);
    if(key < prev->data ){
        prev->left=newNode;
    }
    else{
        prev->right=newNode;
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

    insert(root, 6);

    inOrder(root);
    //      _7_
    //     /    \
    //    4      11
    //   / \     /
    //  2   5   9
   //        \
   //         6
}