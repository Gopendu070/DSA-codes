#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int n, int target){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(array[mid]==target){
            return mid;
        }else if(target>array[mid]){
            l=mid+1;
        }else if(target<array[mid]){
            r=mid-1;
        }
    }
    return -1;
}
main(){
    
    int a[] = {2, 4, 7, 9, 11};              //must be sorted
     int n = sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    for(auto i:a){
        cout<<i<<" ";
    }
    int e;
    cout << "\nEnter element to find: ";
    cin >> e;

    cout<<"Element "<<e<<" is found at index "<< binarySearch(a, n, e);
}