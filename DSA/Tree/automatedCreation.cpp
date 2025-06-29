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

struct tree* addNode(struct tree* root, int x){
	struct tree *tmp;
	struct tree *store;
	tmp=root;
	while(tmp!=NULL){
		if(x < tmp->data){
			store=tmp;
		 	tmp=tmp->left;
		 	if(tmp==NULL)
		 		store->left=createNode(x);
		}
		else if(x > tmp->data){
			store=tmp;
			tmp=tmp->right;
			if(tmp==NULL)
		 		store->right=createNode(x);
		}
    }
    return root;
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
    int x, n;
    root=createNode(17);
    printf("The root is 17. \nEnter no of nodes: ");
    scanf("%d",&n);
   
    while(n>0){
	    printf("Enter Node value: ");
	    scanf("%d", &x);
	    root=addNode(root, x);
	    n--;    
	}
	    
  
     
    printf("In Order: ");
    inOrder(root);
}

