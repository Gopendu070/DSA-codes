#include<iostream>
 #include <typeinfo> 
#include<map>
#include<vector>
using namespace std;
int maxPossiblePalindromeLength(string& s){
    int maxLen=0;
    map<char, int> mp;
    bool isOddNoOfCharExist=false;

    // map will store {char: count of char}
    for(auto c:s){
        mp[c]++;
    }
    // for(auto k:mp){
    //     cout<<k.first<<" : "<<k.second<<endl;
    // }
    for(auto &pair:mp){
        if(pair.second%2==0){
            maxLen+=pair.second;
        }else{
            maxLen+=pair.second-1;
            isOddNoOfCharExist=true;
        }
    }
    return isOddNoOfCharExist? maxLen+1 : maxLen;
}
main(){
    string s="aabbbbcdc";
    cout<<"longest possible palindromic string length= "<<maxPossiblePalindromeLength(s);
    
}