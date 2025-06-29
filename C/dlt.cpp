#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node
{
    int data;
    struct Node *nxt;
};

void traverse(struct Node *head)
{
    struct Node *ptr = head;
  do {
        printf("%d\n", ptr->data);
        ptr=ptr->nxt; 
    } while (ptr != head);
}

 struct Node* insertFirst(struct Node * head, int val)
 {
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = val;
 
    struct Node * p = head->nxt;
    while(p->nxt != head)
	{
        p = p->nxt;
    }
    // At this point p points to the last node of this circular linked list
 
    p->nxt = ptr;
    ptr->nxt = head;
    head = ptr;
    return head;
 }
int main()
{
    struct Node *head, *sec, *third, *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    sec = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 11;
    head->nxt = sec;

    sec->data = 21;
    sec->nxt = third;

    third->data = 31;
    third->nxt = fourth;

    fourth->data = 41;
    fourth->nxt = head;
  
 head= insertFirst(head, 33);
    traverse(head);
    return 0;
}
