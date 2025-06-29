#include <bits/stdc++.h>
#include "CreateList.h"
using namespace std;

 Node* deleteNode(Node* head){
    int t;
    cout<<"Target element: ";
    cin>>t;
     Node *tmp;
     Node *p=head;
    if(head->data==t){
        return head->next;
    }

    while(p->data != t && p->next != NULL ){
        tmp=p;
        p=p->next;
     //   cout<<"p= "<<p->data<<", tmp= "<<tmp->data<<endl;
    }
    if(p->next==NULL && p->data !=t){
        cout<<"\nElement not in the List\n";
        return head;
    }
    tmp->next=p->next;
    return head;
}

int main(){
  
    Node *head;
    CreateList c;
    head=c.createList(head);
    head=deleteNode(head);
    c.traverse(head);
    c.insertAtIndex(head, 17);
    c.traverse(head);
}