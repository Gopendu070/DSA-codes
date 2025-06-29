// Write cpp code to partition the arr such that elements less than equal to x rearrangees themselves to left of x 
// and greater than x goes to right... x might not be present in the array, 
//also return the index of last element that is <=x

#include<iostream>
using namespace std;
int partitionByX(int *a, int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        if(a[l]<=x){
            l++;
        }else if(a[r]>x){
            r--;
        }else{
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
    return r;
}
int partitionByXmethod2(int *a, int n, int x){
    int b[n];
    int l=0, r=n-1;
    for(int i=0; i<n; i++){
        if(a[i]<=x){
            b[l]=a[i];
            l++;
        }else{
            b[r]=a[i];
            r--;
        }
    }
    cout<<"l="<<l<<", r="<<r<<endl;
    for(int i=0; i<n; i++){
        cout<<b[i]<<", ";
    }
    return l-1;
}
main(){
    int a[]={3, 6, 8, 5, 2, 7, 4, 1, 5, 9};         // ==> 3, 4, 5, 6, 7, 8
    int x=5;
    int n=sizeof(a)/sizeof(a[0]);
   int ans= partitionByXmethod2(a,n,x);   //with extra space
   int ans= partitionByX(a,n,x);       //recomended
    
    cout<<"\nPartition index: "<<ans;
   
}