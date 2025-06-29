#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *nxt;
};

void enQueue(struct Node *f,struct Node *r, int val){
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is full.");
    }
    else{
        n->data=val;
        n->nxt=NULL;
        r->nxt=n;
    }
}