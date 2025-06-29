#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;          //    T.C= 2^n           //   S.C=2^n

void findSubset(int ind, int sum, int n, vector<int> &arr, vector<int> &sumSubset){
    if(ind == n){
        sumSubset.push_back(sum);
        return;
    }

    //pick the element at 'ind' and move forward
    findSubset(ind+1, sum+arr[ind], n, arr, sumSubset);

    //Don't pick and move forward
    findSubset(ind+1, sum, n, arr, sumSubset);  //No increment of sum as we're not picking it
}

/* Given an integer array nums that may contain duplicates,
 return all possible SUM OF SUBSETS (the power set). */

int main(){
    vector<int> arr={3, 1, 2};
    vector<int> sumSubset;

    findSubset(0, 0, arr.size(), arr, sumSubset);
    //sort the list
    // sort(sumSubset.begin(),sumSubset.end());

    for(int it:sumSubset){
        cout<<it<<" ";
    }

}