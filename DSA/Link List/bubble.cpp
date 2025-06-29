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
void bubble(struct Node* head){
    struct Node *p;
    struct Node *q;  int temp;
    struct Node *end;
    for(end=NULL; end != head->nxt; end=q){         //'end'  starts from last and goes backward to the 'head->nxt' (i.e. 2nd Node)
    
        for(p=head; p->nxt != end; p=p->nxt){        //'p' goes from head to the last unsorted Node(i.e. just previous Node before 'end' [in each pass])
            q=p->nxt;
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
    cout<<endl<<"After Bubble Sort: "<<endl;

    bubble(head);
    traverse(head);
   
 return 0;
}