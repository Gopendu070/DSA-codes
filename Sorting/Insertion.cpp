#include<iostream>
using namespace std;

void insertion(int *A, int n){          //Stable         WORST_T.C.= O(n^2)     BEST_T.C.= O(n)
    for(int i=1; i<n; i++){         // i : 1 -> n-1
       int j=i;
       while(j>0 && A[j-1]>A[j]){    // j : 0 -> n-1
        // swap A[j-1] & A[j]
        A[j-1]=A[j-1]+A[j];
        A[j]=A[j-1]-A[j];
        A[j-1]=A[j-1]-A[j];

            // int tmp=A[j-1];
            // A[j-1]=A[j];
            // A[j]=tmp;
       }
    }
}

void display(int * A, int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" " ;
    }
    cout<<"\n";
}

int main(){
    int arr[]={3, 6, 8, 5, 7, 9, 18};
    int s=sizeof(arr)/sizeof(int);
    insertion(arr, s);
    display(arr, s);
}