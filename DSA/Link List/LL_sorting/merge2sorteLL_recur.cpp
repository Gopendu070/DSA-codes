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

    struct Node* merge(struct Node *l1, struct Node *l2){
        if(l1 == NULL)
            return l2;
        if(l2==NULL)
            return l1;

        if(l1->data <= l2->data)  {   
            l1->nxt=merge(l1->nxt, l2);
            return l1;
        }
        else if(l2->data < l1->data){
            l2->nxt=merge(l1, l2->nxt);
            return l2;
        }
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