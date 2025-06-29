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

void  levelOrderTraversal_2(struct tree *root){   // To print a next line
    if (root==NULL){
        return;
    }
    queue<tree*> q;

    q.push(root);

    tree *nullPtr=createNode(9999);                     //Creating a random ptr having an abnormal random value
    q.push(nullPtr);                                    // using nullPtr instead of NULL

    while(q.empty()==false){
        tree* curr= q.front();

        if(curr != nullPtr)           // avoiding the 'nullPtr->data' to be printed
           cout<< curr->data<<" ";
        
        q.pop();                        //pop the current node

        if(curr == nullPtr){
            if(q.empty()==true){
                return;
            }
            cout<<"\n";
            q.push(nullPtr);
        }
        
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
 
}
void  levelOrderTraversal_1(struct tree *root){
    if (root==NULL){
        return;
    }
    queue<tree*> q;

    q.push(root);

    while(q.empty()==false){
        tree* curr= q.front();
        cout<< curr->data<<" ";
        
        q.pop();                        //pop the current node

        
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
 
}
int main(){
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
   levelOrderTraversal_1(root);
   cout<<endl<<endl;
   levelOrderTraversal_2(root);
    return 0;
}