#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={2, 1, 0, 2, 3, 4};
   // vector<int> duplicates(int arr[], int n) {
        // code here
        vector <int> res;
        for(auto x: arr){
            
            if(arr[x]>=0)
                arr[x]=arr[x]*(-1);
            else
                res.push_back(x);
        }
       // return res;
       // }
       for(int i=0; i<6; i++){
        cout<<res.at(i)<<" ";
       }
}