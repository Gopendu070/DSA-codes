
 #include<bits/stdc++.h>
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


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;                     // 10 ->  30 -> 80 -> 20 -> 50 -> NULL

    head=(struct Node*)malloc(sizeof(struct Node));    
    second=(struct Node*)malloc(sizeof(struct Node));    
    third=(struct Node*)malloc(sizeof(struct Node));    
    fourth=(struct Node*)malloc(sizeof(struct Node));    
    fifth=(struct Node*)malloc(sizeof(struct Node));    
    
    head->data=10;          second->data=30;        third->data=80;          fourth->data=20;       fifth->data=50;
    head->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=NULL;

    traverse(head); 
    insertion(head);
    cout<<endl<<"After Bubble Sort: "<<endl;   
    traverse(head);    
 return 0;
}