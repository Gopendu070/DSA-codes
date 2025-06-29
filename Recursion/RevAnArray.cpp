#include<iostream>
using namespace std;



void rev(int i, int n, int arr[]){
  
    int temp;
    if(i >= n/2){
        return;
    }
    else{
        
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
        
         rev(i+1, n, arr);
    }
}

void reverseArr(int l, int r, int *arr){
    if(l>=r){
        return;
    }
    else{
      int  temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;

        reverseArr(l+1, r-1, arr);
    }
}
 
 void printarr(int arr[], int s){
    for(int it=0; it<s; it++){
        cout<<arr[it]<<" ";
    }
 }

int main(){
int arr[]={2, 3, 1, 7, 3};
int n=sizeof(arr)/sizeof(arr[0]);

// rev(0, n, arr);
reverseArr(0, n-1, arr);
printarr(arr, n);


}
