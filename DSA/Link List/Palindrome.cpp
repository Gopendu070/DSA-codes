#include<iostream>

using namespace std;
struct Node
{
    struct Node *nxt;
    int data;
};

// static bool evenNodes=false;    //bool to determine even nodes or not
void display(Node *head){
    Node* p=head;
    while(p!=NULL){
        cout<<p->data<<" -> ";
        p=p->nxt;
    }
}

Node * findMid(Node *head){
    struct Node *fast=head;
    struct Node *slow=head;
    while(fast!=NULL &&  fast->nxt != NULL ){
        // if(fast->nxt->nxt==NULL)        //condition applied when no. of nodes is even   //Or use  while(fast!=NULL && fast->nxt!=NULL)
        // {   
        //     // evenNodes=true;            //it means there are even Nodes
        //     return slow->nxt;       // In case of even Nodes the mid = slow->nxt
        // }
        fast=fast->nxt->nxt;
        slow=slow->nxt;
    }
   return slow;
}

Node * rev(Node * head){
    if(head->nxt==NULL)
        return head; 
    Node *newHead=rev(head->nxt);
    head->nxt->nxt=head;
   
    head->nxt=NULL;

    return newHead;
}

bool checkPalindrome(struct Node *head){
    bool isPal=false;
    struct Node *front=head;
    struct Node *end;
    struct Node *mid = findMid(head);
    end=rev(mid);                     //reversing the LL from mid to get the last node

    while(front != end  && end != NULL){        // 1st cond. for ODD Nodes    &&    2nd cond. for EVEN Nodes
        if(front->data == end->data){
            front=front->nxt;
            end=end->nxt;
            isPal=true;
        }
        else{
            isPal=false;
            break;
        }
    }
    return isPal;
}

// STEP_1 : Find the miid
// STEP_2 : Reverse the LL from middle to end(also return the last Node)
// STEP_3 : Run 2 ptrs, one from start to mid & other from the end to mid


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

    
    head->data=10;          second->data=20;        third->data=30;          fourth->data=20;       fifth->data=10;     
    head->nxt=second;       second->nxt=third;      third->nxt=fourth;       fourth->nxt=fifth;     fifth->nxt=NULL;      

    display(head);
   if(checkPalindrome(head))
         cout<<"\nYES, it is a palindrome";
    else
         cout<<"\nNO, not a palindrome ";
   
}
