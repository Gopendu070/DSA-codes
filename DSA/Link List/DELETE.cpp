#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node
{
    int data;
    struct Node *nxt;
};

void traverse (struct Node * ptr)
{
    while(ptr!=NULL){
    
        printf("%d\n", ptr->data);
        	ptr=ptr->nxt;
    }
}
//Case 1:
struct Node* deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->nxt;
    delete ptr;
    return head;
}
//Case:2
struct Node* deleteAtEnd(struct Node *head) 
{  
     struct Node *p= head;
       struct Node *q=p->nxt;
       while(q->nxt != NULL)
       {
            p=p->nxt;
            q=q->nxt;
       }
    p->nxt=NULL;
    free(q);
return head;
}
//Case:3
struct Node* deleteAtIndex(struct Node *head, int index) 
{   int i;   
     struct Node *p= head;
       struct Node *q=p->nxt;
       for(i=0; i< index-1 ; i++)
       {
           p=p->nxt;
           q=q->nxt;
       }
    p->nxt=q->nxt;
    free(q);
return head;
    
}
int main()
{
    struct Node *head, *sec, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    sec = (struct Node *)malloc(sizeof(struct Node));
    Node *secLast= new Node();
    last = (struct Node *)malloc(sizeof(struct Node));

    head->data = 11;
    head->nxt = sec;

    sec->data = 20;
    sec->nxt = secLast;

    secLast->data=25;
    secLast->nxt=last;

    last->data = 30;
    last->nxt = NULL;
    
    printf("Before deletion\n");
    traverse(head);
	
	//head=deleteFirst(head);
    // head=deleteAtEnd(head);
	head=deleteAtIndex(head, 2);
	printf("After deletion\n");
	traverse(head);
    return 0;
}
