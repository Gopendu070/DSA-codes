#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct stack
{
    int size;
    int top;
    int  *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
     return 1;
    else
     return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == (ptr->size - 1))
     return 1;
    else
     return 0;
}
void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
     printf("STACK_OVERFLOW");
    else    
     ptr->top++;
     ptr->arr[ptr->top]=val;
}
void pop(struct stack *ptr)
{   
    int val;
    if(isEmpty(ptr))
        printf("STACK_UNDERFLOW");
    else   
       {
          val= ptr->arr[ptr->top];
          ptr->top--;
          printf("%d is Popped from Stack ", val);
       } 
     
}

int peek(struct stack *ptr, int i)
{
	int index=(ptr->top-i+1);
	  if(index<0)
	{
	      printf("Not a valid position");
	   return -1;
	}
	else
	 return ptr->arr[index];
}



main()
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size= 6;
    s->top= -1;
    s-> arr= (int *)malloc(s->size*sizeof(int)) ;

        push(s, 6);
         push(s, 69);
         push(s, 60);
         push(s, 66);
         push(s, 67);
         push(s, 67);
         printf("@ position => %d", peek(s, 3));
 
}
