#include<iostream>
using namespace std;     //5, 4, 3, 2, 1

void print(int i, int n){
    if(i>n){
        return;
    }
    print(i+1, n);
    cout<<i<<" ";
}

    //  void print2(int n){
    //     if(n<=0)
    //         return;
    //     cout<<n<<" ";
    //     print2(n-1);
    //  }

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    int i=1;
    print(i,n);
    cout<<endl;
    //   print2(n);
}