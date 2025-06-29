#include<iostream>
#include<vector>
using namespace std;
//Print all the sub sequences that contain a sum = targetSum

int total=0;           // global variable
void subSeqSum(int i, int sum,int targetSum, vector<int> &ds, int *arr, int n){
    //Base Case
    if(i==n){
        if (sum==targetSum)
        {//print it
            for(int k:ds){
                cout<<k<<" ";
            }cout<<endl;
        total++; //counting total subSeq...
        }
        return;
    }
    // Pick(add element to the sum and ds) and go to the next index (i+1)
    ds.push_back(arr[i]);
    sum+=arr[i];
    subSeqSum(i+1, sum, targetSum, ds, arr, n);

    //Dont Pick and go to the next index
    ds.pop_back();
    sum-=arr[i];
    subSeqSum(i+1, sum, targetSum, ds, arr, n);
}


// type 2 to count number of subSequences
int subSeqSumType2(int i, int sum,int targetSum, vector<int> &ds, int *arr, int n){
    //Base Case
    if(i==n){
        if (sum==targetSum)
        {//print it
            for(int k:ds){
                cout<<k<<" ";
            }cout<<endl;
        return 1;
        }
        return 0;
    }
    // Pick(add element to the sum and ds) and go to the next index (i+1)
    ds.push_back(arr[i]);
    sum+=arr[i];
    int l= subSeqSumType2(i+1, sum, targetSum, ds, arr, n);

    //Dont Pick and go to the next index
    ds.pop_back();
    sum-=arr[i];
    int r= subSeqSumType2(i+1, sum, targetSum, ds, arr, n);
    return l+r;
}
                                  
                                        // T.C = O(2^n)
int main(){

    int arr[]={1, 2, 1, 1};
    int n=sizeof(arr)/sizeof(arr[0]), target=3;
    vector<int> ds;
    int t= subSeqSumType2(0, 0, target, ds, arr, n);
    cout<<"Total Sub Sequences = "<<t;
    return 0;
}