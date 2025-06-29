#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> NSR(vector<int> arr, int n){
    stack<pair<int,int>> stk;
    vector<int> v;
    int pseudIndx=n;

    for(int i=n-1; i>=0; i--){
        if(stk.size()==0)
            v.push_back(pseudIndx);

        else if(stk.top().first < arr[i])
            v.push_back(stk.top().second);
        
        else if(stk.top().first >= arr[i]){
             while(stk.size()!=0 && stk.top().first >= arr[i] )
                stk.pop();

            if(stk.size()==0)
                v.push_back(pseudIndx);
            else if(stk.top().first < arr[i])
                v.push_back(stk.top().second);
        }
      stk.push({arr[i],i});
    }
    reverse(v.begin(), v.end());
    return v;
}

vector<int> NSL(vector<int> arr, int n){
     stack<pair<int,int>> stk;
    vector<int> v;
    int pseudeIndx=-1;

    for(int i=0; i<=n-1; i++){        
        if(stk.size()==0)
            v.push_back(pseudeIndx);

        else if(stk.top().first < arr[i])
            v.push_back(stk.top().second);
        
        else if(stk.top().first >= arr[i]){
            while(stk.size()!=0 && stk.top().first >= arr[i] )
                stk.pop();

            if(stk.size()==0)
                v.push_back(pseudeIndx);
            
            else if(stk.top().first < arr[i])
                v.push_back(stk.top().second);
        }
      stk.push({arr[i],i});
      
    }
    // reverse(v.begin(), v.end());
    return v;
}

int MAH(vector<int> arr, int n){
    int mx=0, currArea;
    vector<int> left=NSL(arr, n);
    vector<int> right=NSR(arr, n);
    vector<int> width(n, 0);
    
    for(int i=0; i<n; i++){
        width[i]=right[i]-left[i]-1;
    }

    for(int i=0;i<n;i++){
        currArea=arr[i]*width[i];
        mx=max(mx, currArea);
      
    }
    return mx;
}
int MA_BinaryMatrix(int mat[4][4]){
    int mxb;
    vector<int> vec(4, 0);
    for(int i=0; i<4; i++)
        vec[i]=mat[0][i];

    mxb=MAH(vec, 4);
    for(int i=1; i<4; i++){
        for(int j=0; j<4; j++){
            if(mat[i][j]==0){
                vec[j]=0;
            }
            else{
                vec[j]=vec[j]+mat[i][j];
            }
        }
        mxb=max(mxb, MAH(vec, 4));
    }
    return mxb;
}

int main(){
    int mat[4][4]={{ 0, 1, 1, 0 },
                   { 1, 1, 1, 1 },
                   { 1, 1, 1, 1 },
                   { 1, 1, 0, 0 }};

    cout<<"The Matrix=> \n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<" ";
        }
    cout<<endl;
    }

    int x=MA_BinaryMatrix(mat);
    cout<<"\nMax of the Binary Matrix =  "<<x;
  return 0;
}
