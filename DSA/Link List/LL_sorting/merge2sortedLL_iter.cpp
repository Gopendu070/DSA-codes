#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *nxt;
};
void traverse(struct Node *head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->nxt;
    }
}
struct Node* insertAtEnd(struct Node *head, int val){
    
    struct Node *ptr;
    struct Node *tmp;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=val;
    ptr=head;
    while(ptr->nxt!=NULL)     //till the second last node
        ptr=ptr->nxt;
   
    ptr->nxt=tmp;
    tmp->nxt=NULL;
    return head;
}

    struct Node* merge(struct Node *l1, struct Node *l2){
        struct Node* L=(struct Node*)malloc(sizeof(struct  Node));
        L->nxt=NULL;     // L is a dummy Node
       
        while(l1!=NULL && l2!=NULL){
            if(l1->data < l2->data){
                L=insertAtEnd(L, l1->data);
                l1=l1->nxt;
            }
            else if(l2->data <= l1->data){
                L=insertAtEnd(L, l2->data);
                l2=l2->nxt;
            }
        }

        if(l1==NULL){
            while(l2!=NULL){
            L=insertAtEnd(L,l2->data);
            l2=l2->nxt;
            }
        }
        else if(l2==NULL){
            while(l1!=NULL){
            L=insertAtEnd(L,l1->data);
            l1=l1->nxt;
            }
        }
        struct Node *newH=L->nxt;
        return newH;            // we've to return the next Node of 'L'
    }

int main(){
    struct Node *head1;
    struct Node *second1;
    struct Node *third1;                  // 10 -> 20 -> 30  -> NULL

    head1=(struct Node*)malloc(sizeof(struct Node));    
    second1=(struct Node*)malloc(sizeof(struct Node));    
    third1=(struct Node*)malloc(sizeof(struct Node));     
    
    head1->data=10;          second1->data=20;        third1->data=30;         
    head1->nxt=second1;       second1->nxt=third1;      third1->nxt=NULL;     

    struct Node *head2;
    struct Node *second2;
    struct Node *third2;                    // 15 -> 30 -> 35  -> NULL

    head2=(struct Node*)malloc(sizeof(struct Node));    
    second2=(struct Node*)malloc(sizeof(struct Node));    
    third2=(struct Node*)malloc(sizeof(struct Node));     
    
    head2->data=15;          second2->data=30;        third2->data=35;         
    head2->nxt=second2;       second2->nxt=third2;      third2->nxt=NULL;     

    struct Node *HEAD=merge(head1, head2);
    cout<<"The Link List after merging two sorted list:\n";
    traverse(HEAD);
 return 0;
}