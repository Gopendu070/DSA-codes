#include<iostream>
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


int main(){
   struct Node *head;

   head=createList(head);
   
    traverse(head);
 return 0;
}