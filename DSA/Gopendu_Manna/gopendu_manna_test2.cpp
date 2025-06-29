#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(string& s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int partitionFunc(string& str, int i, int j) {
    if( (i>=j)|| checkPalindrome(str, i,j)){
        return 0;
    }
    int res = INT_MAX, cuts;

    int result=INT_MAX;
    int cutCount;
    for(int x=i;x<j;x++){
        cutCount=1+partitionFunc(str,i,x)+partitionFunc(str,x+1,j);
        result=min(res,cutCount);
    }
    return result;
}

int main() {
    string s;   // input
    cin>>s;
    cout << partitionFunc(s,0,s.size()-1) << endl;
    return 0;
}




