#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printAll(vector<vector<int>> &res){
    for (auto it:res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

void find_unique_Subsets(int ind, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=ind; i<arr.size(); i++){

        if(i != ind && arr[i-1]==arr[i]){
            continue;
        }
        ds.push_back(arr[i]);
        find_unique_Subsets(ind+1, arr, ds, ans);
        ds.pop_back();
 
    }
}


/* Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set MUST NOT CONTAIN any DUPLICATE SUBSET. Return the solution in any order. */ 

int main(){
    vector<int> arr={2, 3, 5};
    vector<int> ds;
    vector<vector<int>> ans;

    // sort(arr.begin(), arr.end());
    
    find_unique_Subsets(0, arr, ds, ans);
    printAll(ans);

}