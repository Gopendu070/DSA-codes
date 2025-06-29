#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *nxt;
};
void traverse(Node *head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->nxt;
    }
}

Node* reverseIter(Node *head){
    Node* prev=NULL;
    Node* cur=head;
    Node* next=head->nxt;

    while(cur != NULL){
        cur->nxt=prev;          //making the reversed connection

        prev=cur;              //Moving each pointer by 1 place
        cur=next;
        if(next!=NULL) { 
            next= next->nxt;
        }
    }
    Node* newHead=prev;
    return newHead;
}

int main(){
    Node* head;
    Node* second;
    Node* third;
    Node* fourth;
    Node* fifth;                     // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    head=(Node*)malloc(sizeof(Node));    
    second=(Node*)malloc(sizeof(Node));    
    third=(Node*)malloc(sizeof(Node));    
    fourth=(Node*)malloc(sizeof(Node));    
    fifth=(Node*)malloc(sizeof(Node));    
    
    head->data=10;          second->data=20;        third->data=30;          fourth->data=40;       fifth->data=50;
    head->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=NULL;

    cout<<"Before reversing:\n ";
    traverse(head);

    head=reverseIter(head);

    cout<<"\nAfter reversing:\n ";
    traverse(head);
 return 0;
}