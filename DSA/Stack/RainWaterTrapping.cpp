#include<bits/stdc++.h>
using namespace std;



int RainWater(int arr[], int n){
    int TotalVol=0;
    int minHeight;
        int i, j;
        vector<int> MaxL;
        int maxL=arr[0];
        MaxL.push_back(maxL);
        vector<int> MaxR;
        int maxR=arr[n-1];
        MaxR.push_back(maxR);

        for( i=1,  j=n-2; i<n, j>=0; i++, j--){
            if(arr[i]>maxL){
                maxL=arr[i];
            }
                MaxL.push_back(maxL);

            if(arr[j]>maxR){
                maxR=arr[j];
            }
                MaxR.push_back(maxR);
        }

    for(int i=0; i<n; i++){
        minHeight=min(MaxL[i], MaxR[i]);
        int WaterLevel=minHeight-arr[i];
        TotalVol+=WaterLevel;
    }
  return TotalVol;
}
 
int main(){
    int arr[]={3,2,4,0,1,4};                                                  //          [] W W  []
    int n=sizeof(arr)/sizeof(int);                                            //    [] W  [] W W  []
    int TrappedWater=RainWater(arr, n);                                       //    [] [] [] W W  []                            
    cout<<"Total trapped water= "<<TrappedWater;                              //    [] [] [] W [] []
}