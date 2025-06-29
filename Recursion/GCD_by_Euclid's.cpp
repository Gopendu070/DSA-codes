#include<iostream>
using namespace std;

int GCD(int a, int b){                      // 42 % 24 = 18
    if(b==0){                                // 24 % 18 = 6
        return a;                           // 18 % 6 = 0
    } 
	else                                      //      ^            6 is the gcd of 48 and 24
    	return GCD(b, a%b);
}

int main(){
    int x, y;
    cout<<"Enter num-1: ";
    cin>>x;
    cout<<"Enter num-2: ";
    cin>>y;
    // int z=GCD(x, y);
    // cout<<"The gcd of "<<x<<" and "<<y<<" is : "<<z;
  return 0;  

}
