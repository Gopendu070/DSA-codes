#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;       //3  2  4
        
        cout<<nums.size()<<endl;
        for(int i=0; i<nums.size(); i++){
            int x=nums[i];
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    // cout<<i<<","<<j<<endl;
                if(x+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }}
            }
        }
        res.push_back(-1);
        return res;
    }

    int main(){
        vector<int> num{11,-2,-3,-4,-5};
        vector<int> res=twoSum(num,-8);
        for(int i:res)
            cout<<i<<" ";
    }