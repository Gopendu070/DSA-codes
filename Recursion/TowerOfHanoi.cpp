#include<iostream>
using namespace std;

int counter=0;

void ToH(int n, int s, int d, int h){
    
    if(n==1){    //base case
        cout<<"Move disk from "<<s<<" to "<<d<<endl;
        counter++;
        return;
    }
    
        ToH(n-1, s, h, d);         //Moving n-1 disks from 'source' to 'helper' by the help of 'destination'
        cout<<"Move disk from "<<s<<" to "<<d<<endl;
            counter++;
        ToH(n-1, h, d, s);          //Moving n-1 disks from 'helper' to 'destination' by the help of 'source'
    
}

int main(){
    int source=1, helper=2, destination=3;
    int N;
    cout<<"Enter number of disks: ";
    cin>>N;
    cout<<endl; 
    ToH(N, source, destination, helper);
    cout<<"No of moves=> "<<counter;
   return 0; 
}
