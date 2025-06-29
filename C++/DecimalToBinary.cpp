#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Decimal Number: ";
    cin>>n;
    cout<<endl;
    vector<int> bi(8,0);

    while(n>0){
        int remainder;
         remainder=n%2;
        bi.push_back(remainder);
        n=n/2;
    }
    
    for(int i=bi.size()-1; i>=0; i--){
        printf(" %d", bi[i]); 
        
    }
}
