#include<iostream>
#include<vector>
using namespace std;

class Solution
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
            res.push_back(ds);
        return;
    }

    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findComb(ind+1, target-arr[ind], arr, res, ds);     //we'r staying at the 'ind' as multiple repeatation is allowed
        ds.pop_back();
    }
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
In each combination there must not be any repeatation. */
int main(){
    Solution s;
    vector<int> candidate={ 2, 4, 3, 1, 5};
   
    s.combSum(candidate, 5);
}


