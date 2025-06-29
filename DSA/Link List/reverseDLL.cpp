#include<iostream>
#include "CreateDLL.h"
Node * reverseDLL(Node *head){
    Node *PrevP, *CurrP, *NextP;
    PrevP=NULL;
    CurrP=head;
    NextP=head->nxt;
    while (CurrP!=NULL)
    {
        CurrP->nxt=PrevP;
        CurrP->pre=NextP;

        //move each pointers by one step
        PrevP=CurrP;
        CurrP=NextP;
        if(NextP!=NULL){
            NextP=NextP->nxt;
        }
    }
    head=PrevP;
    return head;
}
int main(){
    Node *head;
    CreateDLL cObj;
    head=cObj.createDLL(head);
    head=reverseDLL(head);
    cObj.traverseDLL(head);
}