#include<bits/stdc++.h>

using namespace std;

vector<int> NGL(int arr[], int n){
    stack<int> stk;
    vector<int> v;

    for(int i=0; i<=n-1; i++){         //just traverse from begining to end
        if(stk.size()==0)
            v.push_back(-1);

        else if(stk.top() > arr[i])
            v.push_back(stk.top());
        
        else if(stk.top() <= arr[i]){
            while(stk.size()!=0 && stk.top() <= arr[i] )
                stk.pop();

            if(stk.size()==0)
                v.push_back(-1);
            
            else if(stk.top()>arr[i])
                v.push_back(stk.top());
        }
      stk.push(arr[i]);
      
    }
    // reverse(v.begin(), v.end());
    return v;
}

int main(){
    int arr[]={1,3,2,4};                 // 1,  3,  2,  4
    int n=sizeof(arr)/sizeof(int);
    vector<int> res=NGL(arr, n);
    cout<<"List of Nearest Greater to Left:\n";
    for(int it:res){
        cout<<it<<", ";
    }
return 0;
}