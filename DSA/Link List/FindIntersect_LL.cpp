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

struct Node * IntersectPoint(struct Node *h1, struct Node *h2){
    struct Node *l1=h1;
    struct Node *l2=h2;
    while(l1 != l2){
        l1=l1->nxt;
        l2=l2->nxt;

        //Whenever any of the Pointer of a LL reaches to NULL, relocate it to the head of the other LL
        if(l2==NULL)
            l2=h1;
        if(l1==NULL)
            l1=h2;
    }

    return l1;

}

// HASH_MAPs can also be used but S.C will be O(n)

int main(){
    struct Node *head1;
    struct Node *second;
    struct Node *third;                         // 10 -> 20 -> 30 -> 40 -> 50 -> 60
    struct Node *fourth;                                
    struct Node *fifth;                      
    struct Node *sixth;                     

    head1=(struct Node*)malloc(sizeof(struct Node));    
    second=(struct Node*)malloc(sizeof(struct Node));    
    third=(struct Node*)malloc(sizeof(struct Node));    
    fourth=(struct Node*)malloc(sizeof(struct Node));    
    fifth=(struct Node*)malloc(sizeof(struct Node));    
    sixth=(struct Node*)malloc(sizeof(struct Node));    
    
    head1->data=10;          second->data=20;        third->data=30;          fourth->data=40;       fifth->data=50;         sixth->data=60;
    head1->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=sixth;       sixth->nxt=NULL;

    struct Node* head2;
    struct Node* second2;
    head2=(struct Node*)malloc(sizeof(struct Node));    
    second2=(struct Node*)malloc(sizeof(struct Node));              // 10 -> 20 -> 30 -> 40 -> 50 -> 60
      //                                                                                  ^
      //                                                                                  |
      //                                                                  // 50 -> 57 ->->                                       
    head2->data=50;             second2->data=57;
    head2->nxt=second2;          second2->nxt=fourth;
    
    struct Node *IntersectNode;
    IntersectNode=IntersectPoint(head2, head1);
    cout<<"The Intersection Node is-> "<<IntersectNode->data;
 return 0;
}