#include<iostream>
#include<vector>
using namespace std;
void rearrangeBySign(vector<int>& arr){
    int n=arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]>0 && i%2==0){
            
        }
        
    }
    for(int x: arr)
            cout<<x;
}
int main(){
    vector<int> arr={3, 1, -2, -5, 2, -4};
    rearrangeBySign(arr);
}