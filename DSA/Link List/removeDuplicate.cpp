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

void insertion(struct Node *head){
    struct Node *p; struct Node *q;
    int temp;

    for(p=head; p->nxt!=NULL; p=p->nxt){    //whenever 'p' is the second last node looping stops
        for(q=p->nxt; q!=NULL; q=q->nxt){      ////whenever 'q' is the last node looping stops
            if(p->data > q->data){
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
        }
    }
}

void DupRemover_iterative(struct Node * head){   
    struct Node* p;
    struct Node* q;
    struct Node* tmp;
    p=head;
    for(p=head; p->nxt != NULL; p=p->nxt){   //  ??  (it'll run if cond: p!=NULL)
        q=p->nxt;
        if(p->data == q->data){
            tmp=q;
           p->nxt = q->nxt;   //skip the duplicate node and connect the further node
            
            delete tmp;
        }
    }
}
struct Node* DupRemover_recur(struct Node * head){

    if( head==NULL || head->nxt==NULL)
        return head;

    struct Node *newHead;
    newHead=DupRemover_recur(head->nxt);

    if(head->data == newHead->data){
        //Do not add head, just skip it and return newHead
        return newHead;
    }
    else{
        //Add head after newHead 
        head->nxt=newHead;
        
        return head;
    }

}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;                     // 10 ->  20 -> 30 -> 30 -> 180 -> NULL

    head=(struct Node*)malloc(sizeof(struct Node));    
    second=(struct Node*)malloc(sizeof(struct Node));    
    third=(struct Node*)malloc(sizeof(struct Node));    
    fourth=(struct Node*)malloc(sizeof(struct Node));    
    fifth=(struct Node*)malloc(sizeof(struct Node));    
    
    head->data=30;          second->data=30;        third->data=20;          fourth->data=10;       fifth->data=10;
    head->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=NULL;

    traverse(head);
    cout<<endl;
    
    insertion(head);          // The LinkList must be sorted first

    cout<<"After sorting "<<endl;
    traverse(head);
    cout<<" \nAfter removing duplicates "<<endl;
      head=DupRemover_recur(head);
    //DupRemover_iterative(head);
   

    traverse(head);
   
 return 0;
}