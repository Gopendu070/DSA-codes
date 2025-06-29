#include<bits/stdc++.h>
using namespace std;
bool isPal(string s, int l, int r){
    if(l<=r){
        if(s[l]!=s[r]){
            return false;
        }else{
            return isPal(s, l+1, r-1);
        }
    }
    else return true;
}
main(){
    string s="abcba";
    cout<<s<<endl;
    int n=s.length();
    cout<<n-1<<endl;
    if(isPal(s, 0,n-1))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}