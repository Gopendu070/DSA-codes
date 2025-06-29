#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *pre;
    Node *nxt;
};

class CreateDLL{
    public:
    Node * insertAtBeg(Node * head){
        int d;
        cout<<"Enter data-1: ";
        cin>>d;
        Node *temp=(Node*)malloc(sizeof(Node));
        if(!temp){
            return head;
        }
        temp->data=d;
        temp->pre=NULL;
        temp->nxt=NULL;
        head=temp;
        return head;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    Node * insertAtEnd(Node * head, int d){
        Node *temp=(Node*)malloc(sizeof(Node));
        if(!temp){
            return head;
        }
        temp->data=d;
        Node *p=head;
        while (p->nxt!=NULL)
        {
                p=p->nxt;
        }
        p->nxt=temp;
        temp->nxt=NULL;
        temp->pre=p;
        return head;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    Node * createDLL(Node * head ){
        int n;
        cout<<"Enter size of DLL: ";
        cin>>n;
        head=insertAtBeg(head);
        for(int i=2; i<=n; i++){
            int d;
            cout<<"Enter data-"<<i<<": ";
            cin>>d;
           head= insertAtEnd(head, d);
        }
        return head;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void traverseDLL(Node *head){
        if(head==NULL){
            cout<<"Empty List";
            return;
        }
        Node *p=head;
        Node* p1;
        cout<<"Traversing towards first -> last"<<endl;
        while (p!=NULL)
        {
            cout<<p->data<<" -> ";
            p1=p;
            p=p->nxt;
        }
        cout<<endl; 
        cout<<"Traversing towards last -> first"<<endl;
        while (p1!=NULL)
        {
            cout<<p1->data<<" -> ";
            p1=p1->pre;
        }
        cout<<endl; 
    }
};