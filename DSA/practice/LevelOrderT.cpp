#include<iostream>
#include<queue>
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
void levlOrder(struct tree *root){
        if(root==NULL){
            return;
        }
    queue<tree*> q;
    q.push(root);
    tree *nullPtr=createNode(999);
    q.push(nullPtr);
    while( q.empty()==false){
        tree *curr;
        curr=q.front();
        if (curr != nullPtr)   cout<<curr->data<< " ";

        q.pop();
    if(curr == nullPtr){
        if(q.empty()==true){
            return;
        }
        cout<<endl;
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
levlOrder(root);
   
}