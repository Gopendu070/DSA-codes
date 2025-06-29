#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    char *exp;
};

int isEmpty(struct stack *p){
    if (p->top == -1)
        return 1;
    else
        return 0;
}
int isFull(struct stack *p){
    if (p->top == p-> size-1)
        return 1;
    else
        return 0;
}

void push(struct stack *p, char val){
    if(isFull(p)){
        printf("Stack Overflow");
    }
    else
        p->top++;
        p->exp[p->top]=val;
}

void pop(struct stack *p){
    if(isFull(p)){
        printf("Stack Underflow");
    }
    else
        p->top--;
}

int checkParenthesis(char *exp){
    struct stack *sp;
    sp->top=-1;
    sp->size=37;
    sp->exp=(char *)malloc(sp->size *sizeof(char));
    
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='('){
            push(sp, '(');
        }
        else if(exp[i]==')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char * exp="(a((c-d))+r/s)9)";
    if(checkParenthesis(exp)){
        printf("Parenthesis is Matching\n ");
    }
    else
        printf("Parenthesis is Not Matching\n ");
return 0;
}