#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

void combination(int ind, int target, vector<int>& ds, vector<int>& nums, vector<int>& res){
        if(ind==nums.size()){
            if(target==0){
                res.push_back(ds.size());
            }
            return;
            }
        //Pick
        if(nums[ind]<=target){
            ds.push_back(nums[ind]);
            combination(ind+1,target-nums[ind], ds, nums, res);
            //pop whenever you come back
        //Not Pick    
            ds.pop_back();
        }
        combination(ind+1,target, ds, nums, res);
    }
    

    int minSubArrayLen(int target, vector<int>& nums) {
        int result;
        vector<int> res;  //Will store the sizes of the possible comb.
        vector<int> ds;
        combination(0,target,ds,nums,res);
        sort(res.begin(), res.end());
        if (res.empty()) {
            return 0; // If no valid subarray found, return 0
        }

        return res[0];
    }
// void combination(int ind, int target, int current, vector<int>& ds, vector<int>& nums, map <int,int>& res) {
//         if (ind == nums.size()) {
//             if (target<=0) {
//                 res[ds.size()]=current; // Store the count of elements in the combination, 
//             }
//             return;
//         }

//         // Pick
      
//             ds.push_back(nums[ind]);
//             combination(ind + 1, target - nums[ind], current+nums[ind], ds, nums, res);
//             ds.pop_back(); // Pop whenever you come back
    
        
//         // Not Pick
//         combination(ind + 1, target, current, ds, nums, res);
//     }

//     int minSubArrayLen(int target, vector<int>& nums) {
//         map<int,int> res;  // Will store the sizes of the possible comb.
//         vector<int> ds;
//         combination(0, target, 0, ds, nums, res);

//         if (res.empty()) {
//             return 0; // If no valid subarray found, return 0
//         }
//          for (const auto& pair : res) {
//       cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
//     }
//        return res.begin()->first;
        
//     }
    
    int main(){
        int k;
        vector<int> nums={12,28,83,4,25,26,25,2,25,25,25,12};
        k=minSubArrayLen(213,nums);
        cout<<k;
    }