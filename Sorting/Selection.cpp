//selection
#include<stdio.h>
 void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
 }
 
 void selectionSort(int *arr, int n){      //Un-stable            T.C.= O(n^2)
    int minIndex;
    for(int i=0; i<n-1; i++){
        minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        if(minIndex!=i)                    // dont swap if no updation of minIndex
            swap(&arr[i], &arr[minIndex]);
    }
 }
 
 void display(int * A, int n){
    for(int i=0; i<n; i++){
        printf("%d, ", A[i]);
    }
    printf("\n");
}
int main(){
    int A[]={4, 3, 2, 5, 3, 7, 9};
    int size=sizeof(A)/sizeof(int);
    display(A, size);
    selectionSort(A, size);
    display(A, size);
}