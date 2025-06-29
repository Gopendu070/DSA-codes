#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    // int n=nums.size();
    // int j=0;
    // for(int i=0; i<n; i++){
    //     if(i==j && nums[i]!=0){
    //         j++;
    //         continue;
    //     }
    //     while(j<n && nums[j]==0 ){
    //         j++; 
    //     }
    //     if(j<n && nums[j]!=0){
    //         // swap
    //         int t=nums[i];
    //         nums[i]=nums[j];
    //         nums[j]=t;
    //     }
    // }
    int n=nums.size();
    int j=-1;
    for(int i=0; i<n;i++){   // find the first 0's index and store it into j
        if(nums[i]==0)
        {
                j=i;
                break;
        }
    }
    
    for(int i=j+1; i<n; i++){
        if(nums[i]!=0){
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
            j++;
        }
    }
}
int main(){
    vector<int> v={1,0,0,3,0,0,2};
    moveZeroes(v);
    for(int x:v){
        cout<<x<<", ";
    }
    
}