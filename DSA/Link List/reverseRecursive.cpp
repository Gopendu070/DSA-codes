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

Node* reverseRecur(Node *head){
  if(head->nxt == NULL)
        return head;

  struct Node* newHead;
  newHead=reverseRecur(head->nxt);    //Move the head untill it is the last Node (head->nxt == NULL)
  
        //now 'newHead' is the Last Node, which will be the new 'head' after reversing

  head->nxt->nxt=head;    //now 'newHead' is the Last Node, but 'head' is still the Second Last Node 
  head->nxt=NULL;

  return newHead;  
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;                     // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    head=(struct Node*)malloc(sizeof(struct Node));    
    second=(struct Node*)malloc(sizeof(struct Node));    
    third=(struct Node*)malloc(sizeof(struct Node));    
    fourth=(struct Node*)malloc(sizeof(struct Node));    
    fifth=(struct Node*)malloc(sizeof(struct Node));    
    
    head->data=10;          second->data=20;        third->data=30;          fourth->data=40;       fifth->data=50;
    head->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=NULL;

    cout<<"Before reversing:\n ";
    traverse(head);

    head=reverseRecur(head);

    cout<<"\nAfter reversing:\n ";
    traverse(head);
 return 0;
}