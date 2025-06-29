#include<iostream>
using namespace std;

int sum(int N){
int preSum=0;
// cout<<preSum<<endl;
    if (N==0){
        return preSum;
    }
    else{
    
        preSum = N+sum(N-1);
    }
}
int main(){
    int n;
     cout<<"Enter: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" numbers: "<<sum(n);
}