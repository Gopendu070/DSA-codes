#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//WITHOUT using STACK

vector<int> MaxAreaOfHist(int arr[], int n){
    vector<int> v;
    
    for(int i=0; i<n; i++){
        int count=0;
        int area=1; 
        for(int j=i; j<n; j++){
            if(arr[j]<arr[i])
                break;
            else
                count++;
        }
        for(int k=i; k>=0; k--){
            if(arr[k]<arr[i])
                break;
            else
                count++;
        }
      
      count=count-1;
       area=arr[i]*count;
      v.push_back(area);
    }
  return v;
}

int main(){
    int a[]={5, 2, 4, 5, 1, 5};
    int n=sizeof(a)/sizeof(int);
    vector<int> res=MaxAreaOfHist(a, n);
    for(int x:res)
        cout<<x<<" ";
    //sort the vector
    sort(res.begin(), res.end());
    cout<<endl<<"Max area is=> "<<res.at(res.size()-1);
}