#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *nxt;
    struct Node *bottom;
};

void traverse(struct Node *head){
    struct Node *p=head;
    
    while(p!=NULL){
        cout<<p->data<<" ";
        struct Node *q=p->bottom;
        while(q!=NULL){
            cout<<q->data<<" ";
            q=q->bottom;
        }
        p=p->nxt;
        cout<<" -> ";
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
struct Node* insertAt_RightEnd(struct Node *head, int val){
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
struct Node* insertAt_BottomEnd(struct Node *head, int val){
    struct Node *ptr;
    struct Node *tmp;
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=val;
    ptr=head;
    while(ptr->bottom!=NULL)     //till the second last node
        ptr=ptr->bottom;
   
    ptr->bottom=tmp;
    tmp->bottom=NULL;
    return head;
}

struct Node * InsertAtBottom(struct Node *head){
    int n, val;
    cout<<"Enter No_of_nodes be added to the BOTTOM: ";
    cin>>n;

   head->bottom=NULL;
    for(int i=1; i<=n; i++){
        cout<<"Enter the Bottom_data-"<<i<<": ";
        cin>>val;
        head=insertAt_BottomEnd(head, val);

}
return head;
}
struct Node* createList(struct Node* head){
    
    int n, val;
    cout<<"Enter No_of_nodes to be added to the RIGHT: ";
    cin>>n;

    head=NULL;
    cout<<"Enter the Right_data-1: ";
    cin>>val;
    head=insertAtBeg(head, val);
   
    //head=InsertAtBottom(head);

    for(int i=2; i<=n; i++){
        cout<<"\nEnter the Right_data-"<<i<<": ";
        cin>>val;
        head=insertAt_RightEnd(head, val);
        //head=InsertAtBottom(head);
    }
return head;
}



int main(){
   struct Node *head;

   head=createList(head);
    traverse(head);
    

 return 0;
}