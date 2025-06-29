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
    struct Node *ans;
    struct Node *tail;
       tail=ans;                            //     ??
    while(l1!=NULL && l2!=NULL){
        if(l1->data < l2->data){
            tail->nxt=l1;
            tail=l1;
            l1=l1->nxt;
        }
        else {
            tail->nxt=l2;
            tail=l2;
            l2=l2->nxt;
        }
    if(l1 == NULL)   
        tail->nxt=l2;
    else      
        tail->nxt=l1;
    }
return ans->nxt;                           //    ??
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
    struct Node *third2;                    // 15 -> 20 -> 35  -> NULL

    head2=(struct Node*)malloc(sizeof(struct Node));    
    second2=(struct Node*)malloc(sizeof(struct Node));    
    third2=(struct Node*)malloc(sizeof(struct Node));     
    
    head2->data=15;          second2->data=25;        third2->data=35;         
    head2->nxt=second2;       second2->nxt=third2;      third2->nxt=NULL;     

    struct Node *HEAD=merge(head1, head2);
    cout<<"The Link List after merging two sorted list:\n";
    traverse(HEAD);
 return 0;
}