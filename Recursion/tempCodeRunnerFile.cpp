
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