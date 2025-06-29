#include<iostream>
using namespace std;

int sum(int N){

    if (N==0){
        return 0;
    }
    else{
    
        return N+sum(N-1);
    }
}
int main(){
    int n;
     cout<<"Enter: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" numbers: "<<sum(n);
}