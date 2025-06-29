#include<iostream>

using namespace std;                //Find the GCD using Euclid's Alkgo 

int gcd(int x, int y){
    while(y!=0){
     
       int rem=x%y;                  // 42 % 24 = 18
        x=y;                       // 24 % 18 = 6
        y=rem;                      // 18 % 6 = 0
    }                               //      ^            6 is the gcd of 48 and 24
    return x;
}

int main(){
    int n1, n2;
    cout<<"Enter number 1 to find their GCD: ";
    cin>>n1;
    cout<<"Enter number 2 to find their GCD: ";
    cin>>n2;
    int GcD=gcd(n1, n2);
    cout<<"The gcd of "<<n1<<" and "<<n2<<" is : "<<GcD; 

}