#include<iostream>
#include<vector>

using namespace std;

class Solution                                                      //T.C= O(2^n * k)  [k=avg size of a combination]
{

public:
void printAll(vector<vector<int>> &res){
    for (auto it:res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

void findComb(int ind, int target, vector<int> &arr, vector<vector<int>> &res, vector<int> &ds)
{
    if(ind==arr.size()){
        if(target==0)
            res.push_back(ds);                  // .push_back() operation  on res isn't a constant time( T.C.!=O(1) ) operation
        return;
    }
    //can only pick an element that is <= target
    if(arr[ind]<=target){
         //pick
        ds.push_back(arr[ind]);
        target=target - arr[ind];
         //we'r staying at the 'ind' with reduced 'target', as multiple repeatation is allowed in combination
         //  if repeatation is not allowed, go to the nxt index which is 'ind+1'(BruteForce of CombSum_2.cpp)
        findComb(ind, target, arr, res, ds);   
        //pop when u come back
        ds.pop_back();
        target=target + arr[ind];
    }
       //not-pick
    
    findComb(ind+1, target, arr, res, ds);   
}

void combSum(vector<int> &candidate, int target){
    vector<int> ds;
    vector<vector<int>> res;

    findComb(0, target,  candidate, res, ds);

    
    printAll(res);
}
    
};

/* Given an array of distinct integers candidates and a target integer target, 
return a list of all unique combinations of candidates where the chosen numbers sum to target. 
You may return the combinations in any order. */
int main(){
    Solution s;
    vector<int> candidate={ 2, 3, 1, 4};
   
    s.combSum(candidate, 7);
}


