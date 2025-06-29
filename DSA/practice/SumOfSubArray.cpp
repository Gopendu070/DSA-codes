#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> result;
        long long sum;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                sum+=arr[j];
                if(sum == s){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
}