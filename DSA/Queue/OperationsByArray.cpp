#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;    //front
    int b;    //back
    int * arr;
};
bool isFull (struct queue *p){
    if(p->b == p->size-1)
        return true;
    else
        return false;
}
bool isEmpty (struct queue *p){
    if(p->b == p->f)
        return true;
    else
        return false;
}
void enQueue(struct queue * p, int val){
    if(isFull(p)){
        printf("Overflow\n");
    }
    else{
        p->b++;
        p->arr[p->b]=val;
    }
}
void deQueue(struct queue *p){
    if(isEmpty(p)){
        printf("Underflow\n");
    }
    else{
        int item;
        p->f++;
        item=p->arr[p->f];
        printf("%d has been removed.\n" , item);
    }
}
void findByIndex(struct queue *p){
   int ind;
    printf("Enter the index: ");
    scanf("%d", &ind);
    printf("The element is %d\n", p->arr[ind-1]);
}
void traverse(struct queue *p){
    if(isEmpty(p)){
        printf("Empty Queue.\n");
    }
    else{
        int i=p->f+1;
        int j=1;
        while(i <= p->b){
            
            printf("\tElement %d=%d \n",  j , p->arr[i]);
            i++;
            j++;
        }

        }
    }
int main(){
    struct queue *qp=(struct queue*)malloc(sizeof(struct queue));
    qp->b = qp->f = -1;
    qp->size=4;
    qp->arr=(int *)malloc(qp->size * sizeof(char));

   int x;
	printf(" 1.InQueue \n 2. DeQueue \n 3. Find by Index \n 4. Traverse\n 5. Quite\n #Maximum 4 elements#");
    while(true){
        printf("\nEnter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            int val;
            printf("  Enter value: ");
             scanf("%d", &val);
            enQueue(qp, val);
            break;
        case 2:
            deQueue(qp);
            break;
        case 3:
            findByIndex(qp);
            break;
        case 4:
            traverse(qp);
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }

}