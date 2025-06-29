#include<iostream>
#include<vector>
using namespace std;
    //                                                               //T.C= O ((2^n)*n)           //S.C= O(n)

void printSequence(int ind, int n, vector<int> &vec, int arr[]){         //**IMP** -> Remember  vector<int> &vec

    if(ind==n){                 //whenever ind == n -> print the answer & return to the prev call
        for(auto it:vec)
            cout<<it<<" ";
        cout<<endl;
        return;
    }

    vec.push_back(arr[ind]);             //pick
    printSequence(ind+1, n, vec, arr);
    
    vec.pop_back( );            //Whenever come back, remove the element from the answer to "not pick"          
    printSequence(ind+1, n, vec, arr);    //not pick
}

int main(){
    int arr[]= {2,3,5};
    vector<int> vec;   
    int size=sizeof(arr)/sizeof(int);
    printSequence(0, size, vec, arr);
    return 0;
}
