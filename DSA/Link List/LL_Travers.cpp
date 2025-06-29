#include<stdio.h>
#include<stdlib.h>
struct Node{
        int data;
        struct Node *nxt;                   //self-referencing structuure
    };
void traverse(struct Node *ptr){
    while(ptr != NULL)
    {
        printf(" Element=%d\n", ptr->data);
        ptr=ptr->nxt;
    }
}
    
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node*)malloc(sizeof(struct Node));    
    second=(struct Node*)malloc(sizeof(struct Node));    
    third=(struct Node*)malloc(sizeof(struct Node));    
    
    head->data=10;
    head->nxt=second;

    second->data=20;
    second->nxt=third;

    third->data=30;
    third->nxt=NULL;

    traverse(head);
}