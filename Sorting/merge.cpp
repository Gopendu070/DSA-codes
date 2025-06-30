//Merge
#include<iostream>
using namespace std;

void merge(int a[], int l, int mid, int r){     //Stable    //T.C (all case) = O(n*log n)
    int b[r+1];
    int i, j, k;
    i=l, j=mid+1;
    k=l;         
    while(i<=mid && j<=r){       // i :: l -> mid             // j :: mid+1 -> r
        if(a[i]<=a[j]){
            b[k++]=a[i++];
           
        }
        else if(a[j]<a[i]){
            b[k++]=a[j++];
       
        }
       
    }

        while(j<=r){
            b[k++]=a[j++];
            
        }
      
        while(i<=mid){
            b[k++]=a[i++];
        
        } 
    //copy all elements of b[]  to  a[]
    for(k=l; k<=r; k++){
        a[k]=b[k];
    }
}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;

        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}

void display(int * A, int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" " ;
    }
    cout<<"\n";
}

int main(){
    int arr[]={3, 6, 3, 5, 7, 9, 8};
    int n=sizeof(arr)/sizeof(int);
    mergeSort(arr, 0, n-1);
    cout<<"After sorting:\n\t";
    display(arr, n);
}