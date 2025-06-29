#include<iostream>
using namespace std;

int sumOdigits(int n){
    if (n/10 == 0){
        return  n;
    }
    else{
        return n%10 + sumOdigits(n/10);
    }
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>> n;
    int sum=sumOdigits(n);
    cout<<"Sum of the digits of "<<n<<" is "<<sum;
  return 0;  
}