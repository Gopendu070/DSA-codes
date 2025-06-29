#include<iostream>
#include<vector>
using namespace std;
//Print only 1  sub sequence that contain a sum = targetSum
// HINT=>
// if (condition == true) return true;  else false;
// if rec. func. call returns true no neeed to go further

bool subSeqSum(int i, int sum,int targetSum, vector<int> &ds, int *arr, int n){
    //Base Case
    if(i==n){
        //check sum
        if (sum==targetSum)
        {//print it
            for(int k:ds){
                cout<<k<<" ";
            }
         return true;          // denotes we have found the sum
        }
        else 
            return false;
    }
    

    // Pick and go to the next index
    ds.push_back(arr[i]);
    sum+=arr[i];
    if(subSeqSum(i+1, sum, targetSum, ds, arr, n)==true){         // if true then no need to proceed further
        return true;
    }

    //Dont Pick and go to the next index
    ds.pop_back();
    sum-=arr[i];
     if(subSeqSum(i+1, sum, targetSum, ds, arr, n)==true){         // if true then no need to proceed further
        return true;
    }

    //if both the func. call doesn't return true
    return false;

}
                                        // T.C = O(2^n)
int main(){

    int arr[]={1, 2, 1, 1};
    int n=4, target=3;
    vector<int> ds;
    bool b=subSeqSum(0, 0, target, ds, arr, n);
    return 0;
}