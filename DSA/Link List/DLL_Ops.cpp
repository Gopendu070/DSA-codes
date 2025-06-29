#include<iostream>
#include "CreateDLL.h"
Node * deleteNode(Node* head, int target){
    for(Node *p=head; p->nxt!=NULL; p=p->nxt){
        Node *p1=p->nxt;
        if(p1->data==target){
            p->nxt=p1->nxt;
            if(p1->nxt!=NULL)           //if target is the last node data
                p1->nxt->pre=p;
        }
    }
    return head;
}

int main(){
    Node *head;
    CreateDLL cObj;
    head=cObj.createDLL(head);
    int x;
    cout<<"Enter target: ";
    cin>>x;
    head=deleteNode(head, x);
    cObj.traverseDLL(head);
}