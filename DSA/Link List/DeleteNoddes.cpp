#include<iostream>
#include "CreateLinkList.h"
using namespace std;

// struct Node{
//     int data;
//     struct Node *next;
// };

// void traverse(struct Node *head){
//     struct Node *p=head;
//     cout<<"Current List:\n\t";
//     while(p!=NULL){
//         cout<<p->data<<" -> ";
//         p=p->next;
//     }
// }
// struct Node* insertAtBeg(struct Node *head, int val){
//     struct Node* tmp;
//     tmp=(struct Node*)malloc(sizeof(struct Node));
//     tmp->data=val;
//     tmp->next=head;
//     head=tmp;
//     return head;
// }
// struct Node* insertAtEnd(struct Node *head, int val){
    
//     struct Node *ptr;
//     struct Node *tmp;
//     tmp=(struct Node*)malloc(sizeof(struct Node));
//     tmp->data=val;
//     ptr=head;
//     while(ptr->next!=NULL)
//         ptr=ptr->next;
   
//     ptr->next=tmp;
//     tmp->next=NULL;
//     return head;
// }
// struct Node* createList(struct Node* head){
    
//     int n, val;
//     cout<<"Enter No of nodes: ";
//     cin>>n;
//     head=NULL;
//     if(n==0){
//         cout<<"No entries!!";
//         return head;
//     }
//     cout<<"Enter the data-1: ";
//     cin>>val;
//     head=insertAtBeg(head, val);
   
//     for(int i=2; i<=n; i++){
//         cout<<"Enter the data-"<<i<<": ";
//         cin>>val;
//         head=insertAtEnd(head, val);
//     }
// return head;
// }


struct Node* deleteNode(struct Node *head, int target){
    if(head==NULL){
        cout<<"Sorry!! The List is empty  :(";
        return head;
    }
    Node* toDelete;
    if(head->data==target){   //checking for the 1st Node
        toDelete=head;
        head=head->next;
        delete toDelete;
        return head;
    }
        struct Node *p; struct Node *tmp;
        p=head;
            while(p->next!=NULL && p->next->data!=target)  // p will always stand jus before the target Node
                p=p->next;

    if(p->next==NULL){
        cout<<target<<" is not in the List\n";
        return head;
    }       

            toDelete=p->next;
            p->next=p->next->next;       //modifing the links
            delete toDelete;
            return head;
}

int main(){
   struct Node *head;
    int target;
    
    CreateLinkList c;
    head=c.createList(head);
  
   
    c.traverse(head);
    cout<<"\nEnter the node to be deleted: ";
    cin>>target;
     head=deleteNode(head, target);
    c.traverse(head);
 return 0;
}