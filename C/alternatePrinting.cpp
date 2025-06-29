#include<iostream>
using namespace std;
int main(){
    int N, i, j, k;
    cout<<"Enter: ";
    cin>>N;
    j=1;
    k=N;
    for(i=1; i<=N; ){
        cout<<j++<<endl;
        i++;

        if(i>N)
            break;
        cout<<k--<<endl;
        i++;
    }
  return 0;
}