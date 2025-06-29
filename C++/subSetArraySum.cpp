#include<iostream>
#include<vector>
using namespace std;
// Given an unsorted array A of size N that contains only positive integers,
//  find a continuous sub-array that adds to a given number S 
//  and return the left and right index(1-based indexing) of that subarray
vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> res;
        int j=0, i=0;
        int sum=0;
        while(i<=n){
            if(sum>s){
                j++; 
                i=j;
                sum=0;
            }
            if(sum==s){
                res.push_back(j+1);
                res.push_back(i);
                return res;
            }
            
            sum+=arr[i];
            i++;
        }
        res.push_back(-1);
        return res;
    }

    int main(){
        vector<int> arr{2,3,2,4,9};
        vector<int> ans;
        ans=subarraySum(arr, arr.size(),15);
        for(auto t:ans){
            cout<<t<<" ";
        }
    }