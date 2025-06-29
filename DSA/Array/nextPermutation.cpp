#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& vec){
    next_permutation(vec.begin(), vec.end());
}
main(){
    vector<int> vec={1,2,3, 4};
    nextPermutation(vec);
    for(auto it:vec){
        cout<<it<<" ";
    }

}