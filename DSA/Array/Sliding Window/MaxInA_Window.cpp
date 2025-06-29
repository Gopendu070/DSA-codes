#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

void maxInAWindow(int *a, int n, int k){
    if(k==1)
        return;
    for(int i=0; i<n-1; i++){
        a[i]=max(a[i], a[i+1]);
    }
    maxInAWindow(a, n-1, k-1);
}
int main(){
    int arr[]={5, 3, -1, 2, 3, -3, 5};
      int n=sizeof(arr)/sizeof(int);
  
    int k=3; //SubArray size
   maxInAWindow(arr, n, k);
   for(int i=0; i<=n-k; i++){
    cout<<arr[i]<<endl;
   }

}