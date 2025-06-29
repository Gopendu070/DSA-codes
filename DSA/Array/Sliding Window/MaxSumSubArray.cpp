#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int maxSubArrSum(int *a, int n, int k){
    int csum=0, sumMax=INT_MIN;
  
    for(int i=0; i<n; i++){
       
        if(i<=k-1)
            csum+=a[i];
        else if(i>=k)
            csum=csum+a[i]-a[i-k];
        if(i>=2)
         {
            cout <<"i = "<<i<<", "<<csum <<endl;
            sumMax=max(csum, sumMax);
         }
    }
    return sumMax;

}
int main(){
    int arr[]={1, 3, -1, -3, 5, 3};
      int n=sizeof(arr)/sizeof(int);
  
    int k=3; //SubArray size
   cout<<"Max sum="<< maxSubArrSum(arr, n, 3);

}