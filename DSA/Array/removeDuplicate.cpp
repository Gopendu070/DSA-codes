#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={7, 1, 3, 2, 2, 1, 3, 4, 5};
    unordered_set<int> uniqueSet;
    vector<int> vect;
    for(int x:arr){
        if(uniqueSet.find(x)==uniqueSet.end()){   //if not found
            uniqueSet.insert(x);    
            vect.push_back(x);
        }
    }
    for(int x:vect){
        cout<<x<<" ";
    }
   
}