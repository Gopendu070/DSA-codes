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

bool checkCircle(Node *head){
    struct Node *slow=head;
    struct Node *fast=head;
    while(fast!=NULL && fast->nxt!=NULL){
        fast=fast->nxt->nxt;
        slow=slow->nxt;
        if(fast == slow)   // Floyd's Cycle Finding Algorithm: The fast & slow ptr must meet @ a certain point if there's a loop
            return true;
    }
    return false;

}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;                         // 10 -> 20 -> 30 -> 40 -> 50 
    struct Node *fourth;                       //               ^           |
    struct Node *fifth;                        //               |  <- <- <- 60
    struct Node *sixth;                     



    head=(struct Node*)malloc(sizeof(struct Node));    
    second=(struct Node*)malloc(sizeof(struct Node));    
    third=(struct Node*)malloc(sizeof(struct Node));    
    fourth=(struct Node*)malloc(sizeof(struct Node));    
    fifth=(struct Node*)malloc(sizeof(struct Node));    
    sixth=(struct Node*)malloc(sizeof(struct Node));    
    
    head->data=10;          second->data=20;        third->data=30;          fourth->data=40;       fifth->data=50;         sixth->data=60;
    head->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=sixth;       sixth->nxt=third;

    if(checkCircle(head))
        cout<<"YES there is a cycle.";
    else
        cout<<"NO cycles found.";
    
 return 0;
}