
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> NSR(int arr[], int n){
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

vector<int> NSL(int arr[], int n){
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

int MAH(int arr[], int n){
    int mx=0, currArea;
    vector<int> left=NSL(arr, n);
    vector<int> right=NSR(arr, n);
    vector<int> width(n, 0);
    
    for(int i=0; i<n; i++){
        width[i]=right[i]-left[i]-1;
        cout<<"Width of "<<arr[i]<<" = "<<width[i]<<endl;
    }

    for(int i=0;i<n;i++){
        currArea=arr[i]*width[i];
        mx=max(mx, currArea);
      
    }
    return mx;
}

int main(){
    int arr[]={2,5,4,5,2};
    int n=sizeof(arr)/sizeof(int);
    int maxArea=MAH(arr, n);
    cout<<"Maximum area of the Histogram=> "<<maxArea;
return 0;
}