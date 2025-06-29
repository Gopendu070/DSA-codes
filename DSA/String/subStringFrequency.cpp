#include<iostream>
using namespace std;
int subStrFrequency(string& s, string& pat){
    int n=s.size();
    int m=pat.size();
    int frq=0;
    for(int i=0;  i<=n-m; i++){       // T.C= O(n*m)
        int j;
        for(j=0; j<m; j++){
            if(s[i+j]!=pat[j]){
                break;
            }
        }
        // if the above loop gets executed without breakin then j=m  => means sub-string is found
        if(j==m){
            frq++;
        }
    }

    return frq;

}
int main(){
    string s="dhimanmanoman";
    string pattern="man";
    cout<<subStrFrequency(s, pattern);

}