#include<iostream>
#include<vector>
using namespace std;

void firstNegative(int arr[],  int n, int k){
    vector<int> v;
    int i=0, j=0;

    while (j<n)
    {
        // untill we hit thw window size=> j++ & push_back(-ve)
       if(j-i+1 < k){
        if(arr[j]<0){
            v.push_back(arr[j]);
        }
        j++;
       }
       else if(j-i+1 == k){
        //push the -ve number
        if(arr[j]<0)
          v.push_back(arr[j]);

        // no -ve in the window
        if(v.size()==0){
            cout<<"0"<<endl;
        }
        // there exist a -ve in the window
        else{
            cout<<v.front()<<endl;
            //Removing the element that is out of the window
            if(v.front()==arr[i]){
                v.erase(v.begin());
            }
        }
        i++;
        j++;
       }
      
    }
    
}

int main(){
    int  arr[]={-1, 6, -3, 1, 3, 6, -6};
    int n=sizeof(arr)/sizeof(int);
    firstNegative(arr, n, 3);
}