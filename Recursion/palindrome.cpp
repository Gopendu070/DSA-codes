#include<iostream>
#include<string>
using namespace std;


void palindromeCheck(int i, int n, string arr){
  
    if(i >= n/2){
        cout<<"Yes '"<<arr<<"' is a Palindrome";
        return;
    }
    else{
        if(arr[i] != arr[n-1-i]){
            cout<<"'"<<arr<<"' is not a Palindrome.";
            return;
        }
        
     palindromeCheck(i+1, n, arr);
    }
}

int main(){
string arr="radar";

int n= arr.size();

palindromeCheck(0, n, arr);



}
