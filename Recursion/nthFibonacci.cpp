#include<iostream>
using namespace std;
int fibo(int n){               // T.C= O(2^n) [APPROX]  [if n is the number of call]
    if(n<=0)
        return 1;

    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    int n;
    cout<<"Enter the position :";
    cin>>n;
     cout<<fibo(n)<<" ";
}