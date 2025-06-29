#include<stdio.h>
#define size 5
    int f=-1;
    int r=-1;


bool isEmpty(int CQ[], int f, int r){
    if(f==-1 || f==r)
        return true;
    else
        return false;
}

bool isFull(int CQ[], int f, int r){
    
    if((f==0 && r==size-1) || f==r+1)
        return true;
    else   
        return false;

}

void traverse(int CQ[], int f, int r){
    for(int i=f; i<=r; i++){
        printf("%d  ",CQ[i]);
    }
}

void insert(int CQ[], int f, int r, int ele){
    if(isFull(CQ, f, r)){
        printf("Over Flow!!");
        return;
    }
    else if(f==-1){
        printf("f=%d  r=%d \n\n", f, r);
        f++; r++;
        printf("f=%d  r=%d \n", f, r);
        CQ[r]=ele;
    }
    else{
        r++;
        CQ[r]=ele;
    }
}

int main()
{
    int CQ[size];

    insert(CQ, f, r, 10);
    insert(CQ, f, r, 10);
    int k;
    printf("E")
    scanf("%d",&k);
    return 0;

}