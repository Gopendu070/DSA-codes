#include<iostream>
#include "CreateLinkList.h"
using namespace std;


int findMid1(Node *head){
    Node *fast=head;
    Node *slow=head;
    
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    // if(fast == NULL ){
    //     cout<<"fast=null";
    // }else if (fast->next == NULL )
    // {
    //     cout<<"fast->next=null";
    //     /* code */
    // }
    
    return slow->data;
}

int findMid2(Node *head){
    int n=0;
     Node *temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
     Node *mid=head;
    int s=n/2;
    while(s>0){
        mid=mid->next;
        s--;
    }
    return mid->data;
}


int main(){
    Node *head;
    CreateLinkList c;
    head=c.createList(head);
    c.traverse(head);
    cout<<"\nThe mid is "<<findMid1(head)<<endl;
    //cout<<"The mid is "<<findMid2(head)<<endl;
}