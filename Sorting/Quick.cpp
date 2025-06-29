//Quick
#include<iostream>
using namespace std;
void display(int * Arr, int n){
    cout<<"After sorting. \n";
    for(int i=0; i<n; i++){
        cout<<Arr[i]<<" " ;
    }
    cout<<"\n";
}

void swap(int *arr,int t1, int t2 ){    
    int temp;
    temp=arr[t1];
    arr[t1]=arr[t2];
    arr[t2]=temp;
}

//Best_Case: if pivot becomes the middle element    O(n*log n)

//Avg_Case: is also                                 O(n*log n)

//Worst_Case: if pivot is chosen either SMALLEST or GREATEST element     O(n^2)

int partition(int* arr,int l,int h){
 int start=l, end=h;
 int pivot=arr[l];

    while(start<end){
        while(arr[start]<=pivot){  start++ ; }   //move 'start'-> untill element is > pivot

        while(arr[end]>pivot){  end-- ; }     //move <-'end' untill element is < pivot
        
        if(start<end){  swap(arr, start, end);  }
    }
  
    swap(arr, l, end );
  return end;       //end is the current position of pivot=arr[start]
}

void quick(int *arr, int low, int high){                 //UN_stable
    if(low<high){
        int pivot= partition(arr, low, high);     //first find pivot, next calling the function excluding pivot(cause pivot element is sorted already)
        quick(arr, low, pivot-1);
        quick(arr, pivot+1, high);
    }
}

int main(){
    int A[]={5, 2, 8, 3, 7, 9, 4};
     int s=sizeof(A)/sizeof(int);
    quick(A, 0, s-1);
    display(A, s);
}