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


void inOrder(struct tree *ptr){
    if(ptr!=NULL){
        inOrder(ptr->left);
        cout<<ptr->data<<" ";
        inOrder(ptr->right);
    }
}

bool checkRecurse(struct tree *root, int key){
    if (root== NULL){
        return false;
    }
    else{
        if(root->data == key){
            return true;
        }
          if(key < root->data){
        return checkRecurse(root->left, key);
        }
        else{
           return checkRecurse(root->right, key);
        }
    }
  
}
void deleteSubTree(struct tree* root, int key){
   struct tree *prev= NULL;
   int i=1;
    while(root->data!=key){
        cout<<"iteration: "<<i++<<endl;
         
         prev=root;
       
        if(key < root->data){
            root= root->left;
        }
        else {
            root= root->right;
        }
    }
    if(prev->left!=NULL && prev->left->data == key){
                    prev->left=NULL;
                }
                else if(prev->right!=NULL && prev->right->data == key){
                    prev->right=NULL;
                }
}

int main(){
    struct tree *root, *p1, *p11, *p111, *p112, *p12, *p122, *p2, *p21;
    root=createNode(7);
    p1=createNode(4); 
        p11=createNode(2);                            p12=createNode(5);
        p111=createNode(1); p112=createNode(3);         p122=createNode(6);
    p2=createNode(11); 
        p21=createNode(9);
    
    root->left=p1;
    root->right=p2;

    p1->left=p11;
    p1->right=p12;

    p11->left=p111;
    p11->right=p112;

    p12->right=p122;

    p2->left=p21;




    //      _7_
    //     /   \
    //    4     11
    //   / \    /
    //  2   5  9
   //  / \   \
   // 1   3   6

    
    deleteSubTree(root, 2);
   inOrder(root);
//    if(checkRecurse(root, 6))  cout<<"present\n";  else cout<<"not";
   

}
