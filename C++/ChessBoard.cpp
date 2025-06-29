#include<iostream>
using namespace std;
// Chess Board: Given an odd integer N draw a chess board of size N x N. Dont execute for even i/p.
//  Each line of the chess board should have spaces and number signs(#) alternating. 
// A space represents a white cell and the number sign a black one. The chess board should be bordered using +, - and | 

// Example :-
// Input: var N = 3
// Output:
// +---+
// |# #|
// | # |
// |# #|
// +---+

int cell(int c1){
    
    if(c1==1){
        cout<<"#";
        return 0;
    }
    else if(c1==0){
        cout<<" ";
        return 1; 
    }
}

void border(int  n){
    cout<<"+";
    for(int i=1; i<=n; i++)
        cout<<"-";
    cout<<"+";
}

int main(){
   int n;
   cout<<"Enter: ";
   cin>>n;
    int c=1;
//draw oppening border
   border(n); 
   cout<<endl;

   for(int i=1; i<=n; i++){
    cout<<"|";
    for(int j=1; j<=n; j++){
        //altering c after every pass
        c=cell(c);
    }
    cout<<"|";
    cout<<endl;
   }

//draw closeing border
   border(n);
return 0;
}