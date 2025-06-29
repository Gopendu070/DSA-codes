#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *nxt;
};

void traverse(struct Node *head){
    struct Node *p=head;
    while(p!=NULL){
        cout<<p->data<<" -> ";
        p=p->nxt;
    }
}
struct Node* insertAtBeg(struct Node *head, int val){
    struct Node* tmp;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=val;
    tmp->nxt=head;
    head=tmp;
    return head;
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
struct Node* createList(struct Node* head){
    
    int n, val;
    cout<<"Enter No of nodes: ";
    cin>>n;

    head=NULL;
    cout<<"Enter the data-1: ";
    cin>>val;
    head=insertAtBeg(head, val);
   
    for(int i=2; i<=n; i++){
        cout<<"Enter the data-"<<i<<": ";
        cin>>val;
        head=insertAtEnd(head, val);
    }
return head;
}

struct Node * rotate_kth(struct Node* head, int k)
{
    int count=1;
    struct Node *last=head; 
    struct Node *pre_Kth=head;

    while(last->nxt!=NULL){
        if(count<k-1){
            pre_Kth=pre_Kth->nxt;      //pre_Kth  =>  k-1'th Node
        }
        count++;
        last=last->nxt;
    } 

    last->nxt=head;             //step 1:   Make a circular LL
 
    head=pre_Kth->nxt;          //step 2:   Set the K'th node as 'head'
  
    pre_Kth->nxt=NULL;          //step 3:   Set the link of K-1'th node to NULL
    
    return head;
}

int main(){
   struct Node *head;

   head=createList(head);
   
    traverse(head);
    head=rotate_kth(head, 4);
    cout<<"\nAfter Rotation: "<<endl;
    traverse(head);
 return 0;
}
