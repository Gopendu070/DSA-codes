#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *nxt;
};

void traverse(struct Node *head){
    struct Node *p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->nxt;
    }
}
struct Node* insertAtBeg(struct Node *head, int val){
    struct Node* tmp;
    tmp=(struct Node*)malloc(sizeof(struct Node));    // Node* tmp= new Node();
    tmp->data=val;
    tmp->nxt=head;
    head=tmp;
    return head;
}

struct Node* insertAtEnd(struct Node *head, int val){
    struct Node *ptr;
    struct Node *tmp;
    // tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp=new Node();
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

struct Node* rev(struct Node *head){
    if(head->nxt==NULL)
        return head;
    
    struct Node *newHead=rev(head->nxt);

    head->nxt->nxt=head;
    head->nxt=NULL;
  return newHead;
}

struct Node* Add_1_to_the_LSB(struct Node *head){
        head=rev(head);
        struct Node *curr=head;
        while( curr!=NULL && curr->data==9){
            curr->data=0;
            curr=curr->nxt;
        }

        if(curr==NULL){                   // "curr" will be NULL whenever all the digits are '9' [e.g- 999 or 99]
            head=insertAtEnd(head, 1);     //so we're adding a new Node(i.e. 1) at the end
            head=rev(head);                 // next reversing the list, to get the actual number
            return head;
        }
        // below 3 lines will be executed if the upper if statement is false
        curr->data=(curr->data)+1;     
        head=rev(head);
       return head;
    }

int main(){
   struct Node *head;

   head=createList(head);
   head=insertAtBeg(head, 7);
    traverse(head);
    cout<<endl;
//    head = Add_1_to_the_LSB(head);
//     traverse(head);

 return 0;
}