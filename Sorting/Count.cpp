#include<iostream>
#include<malloc.h>
using namespace std;

    void countSort(int *a, int s, int max){                                 
        int *count= new int[max+1];  
    //  Initialize all element of count as 0
    for(int i=0; i<max+1; i++){
        count[i]=0;
    }

    for(int i=0; i<max+1; i++){
        count[a[i]]=count[a[i]]+1;
    }
    int i =0; // counter for count array
    int j =0; // counter for given array A

    while(i<= max){
        if(count[i]>0){
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
}
}
int maximum(int *A, int n){
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i]){
            max = A[i];
        }
    }
    return max;
    
}
void display(int * Arr, int n){
    cout<<"After sorting. \n";
    for(int i=0; i<n; i++){
        cout<<Arr[i]<<" " ;
    }
    cout<<"\n";
}
int main(){
    int arr[]={2, 1, 3, 7, 2, 8, 9};
    int size=sizeof(arr)/sizeof(int);
    int Max;
    Max=maximum(arr, size);
    countSort(arr, size, Max);
    display(arr, size);

}
