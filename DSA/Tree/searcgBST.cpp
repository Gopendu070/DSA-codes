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
bool checkIterative(struct tree* root, int key){
   
    while(root!=NULL){
        
         if(root->data == key){
            return true;
        }
        
        else if(key < root->data){
            root= root->left;
        }
        else {
            root= root->right;
        }
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
    int input;
    cout<<"Enter the number: ";
    cin>>input;

    // if(checkRecurse(root, input))
    //    { cout<<"\n"<<input<<" is Present"; }
    // else
    //    {  cout<<"\n"<<input<<" is Not Present"; }

     if(checkIterative(root, input))
       { cout<<"\n"<<input<<" is Present"; }
    else
       {  cout<<"\n"<<input<<" is Not Present"; }
}