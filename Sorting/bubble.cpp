//bubble
#include<stdio.h>

void display(int * A, int n){
    for(int i=0; i<n; i++){
        printf("%d, ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n){                 //Stable         WORST_T.C.= O(n^2)     BEST_T.C.= O(n)
     printf("Normal Bubble Sort\n");
    int temp;
   
    for(int i=0; i < n-1; i++){      //Loop for Pass number
     printf("Pass number %d.\n", i+1);
        for(int j=0; j<n-1-i ; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

void adaptiveBubbleSort(int *A, int n){
    printf("Adaptive Bubble Sort\n");
    int temp;
    for(int i=0; i < n-1; i++){      //Loop for Pass number
        bool isAnySwapped=false;
        printf("Pass number %d.\n", i+1);
        for(int j=0; j<n-1-i ; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                 isAnySwapped=true;
            }
        }
        if(!isAnySwapped){
            return;
        }
    }
}

int main(){
    int Arr[]={2,21,3,6,8,4,7};
    int size=sizeof(Arr)/sizeof(int);

    int c;
    printf("Enter 1 for BubbleSort\nEnter 2 for AdaptiveBubbleSort\n->");
    scanf("%d",&c);
    display(Arr, size);
    switch (c)
    {
    case 1:
        bubbleSort(Arr, size);
        break;
    case 2:
        adaptiveBubbleSort(Arr, size);
        break;
    default:
        printf("Invalid input.");
        break;
    }
    display(Arr, size);
}
