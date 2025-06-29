#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main(){
    string s="leEtcode";
    string vowels;
    vector<int> charCount(26, 0);
    // for(char c:s){
    //   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    //     int i=c-'a';
    //     charCount[i]++;
    //   }
    // }
   

    for(int i=0; i<s.size(); i++){
        char c=s[i];
        if(c=='a'||c=='e'||c=='E'||c=='i'||c=='o'||c=='u'){
                vowels=vowels+c;
        }

    }
    cout<<endl;
    sort(vowels.begin(), vowels.end());

    cout<<vowels<<endl;
    int j=0;
    for(int i=0; i<s.size(); i++){
        char c=s[i];
        if(c=='a'||c=='e'||c=='E'||c=='i'||c=='o'||c=='u'){
           
                s[i]=vowels[j];
                j++;
        }

    }
    cout<<s;
    
}