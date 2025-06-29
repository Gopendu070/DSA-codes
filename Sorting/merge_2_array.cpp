#include<iostream>
using namespace std;

 void merge(int *a, int *b, int *c, int m,int n){
    int i, j, k;
     i=j=k=0;

    while (i<m && j<n)
    {
            if(a[i]<= b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k]=b[j];
        j++;
        k++;
    }
 }
 
void display(int * Arr, int n){
    cout<<"After sorting. \n";
    for(int i=0; i<n; i++){
        cout<<Arr[i]<<" " ;
    }
    cout<<"\n";
}
int main(){
    int A[]={2,4,5,6,9};
    int B[]={5,11,15,17};
     int s1=sizeof(A)/sizeof(int);
     int s2=sizeof(B)/sizeof(int);
     int s3=s1+s2;
    int C[s3];
    merge(A,B,C, s1, s2);
    display(C, s3);
}
