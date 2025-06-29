#include<iostream>
using namespace std;         //https://www.youtube.com/watch?v=tsQT0MT73Og&list=PLKZaSt2df1gz775Mz-2gLpY9sld5wH8We&index=18

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

Node* first_Node_of_Circle(Node *head){
    struct Node *slow=head;
    struct Node *fast=head;
    while(fast!=NULL && fast->nxt!=NULL){
        fast=fast->nxt->nxt;
        slow=slow->nxt;
        if(fast == slow)
            break;              //Break from the loop where fast and slow meets each other
    }
    struct Node *ptr1=head;         //ptr1 starts from head
    struct Node *ptr2=slow;         // ptr2 starts from where the 'slow' & 'fast' pointer meets

    while(ptr1 != ptr2){
        ptr1=ptr1->nxt;
        ptr2=ptr2->nxt;
    }

    return ptr2;   //ptr1 can also be returned
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;                         // 10 -> 20 -> 30 -> 40 -> 50 
    struct Node *fourth;                       //               ^           |
    struct Node *fifth;                       //                |  <- <- <- 60
    struct Node *sixth;                     

    head=(struct Node*)malloc(sizeof(struct Node));    
    second=(struct Node*)malloc(sizeof(struct Node));    
    third=(struct Node*)malloc(sizeof(struct Node));    
    fourth=(struct Node*)malloc(sizeof(struct Node));    
    fifth=(struct Node*)malloc(sizeof(struct Node));    
    sixth=(struct Node*)malloc(sizeof(struct Node));    
    
    head->data=10;          second->data=20;        third->data=30;          fourth->data=40;       fifth->data=50;         sixth->data=60;
    head->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=sixth;       sixth->nxt=third;

    struct Node *p=first_Node_of_Circle(head);
    cout<<"First Node of the detected cycle is "<<p->data;
    
 return 0;
}