#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *pre;
    int data;
    struct Node *nxt;
};

void traverse(struct Node *head)
{
    struct Node *ptr = head;
  do {
        printf("%d\n", ptr->data);
        ptr=ptr->nxt; 
    } while (ptr != NULL);
    printf("\n");
printf("%d\n", ptr->data);
  do{
     ptr=ptr->pre;
     printf("%d\n", ptr->data);
        
  }while (ptr != NULL);
}

int main()
{
    struct Node *N1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *N2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *N3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *N4 = (struct Node*)malloc(sizeof(struct Node));

    struct Node *head=(struct Node*)malloc(sizeof(struct Node));

    N1->pre = NULL;
    N1->data = 5;
    N1->nxt = N2;

    N2->pre = N1;
    N2->data = 15;
    N2->nxt = N3;

    N3->pre = N2;
    N3->data = 25;
    N3->nxt = N4;

    N4->pre = N2;
    N4->data = 35;
    N4->nxt = NULL;

    head=N1;

    traverse(head);
}
