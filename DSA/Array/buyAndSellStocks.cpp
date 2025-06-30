#include<bits/stdc++.h>
using namespace std;
void buySellStocks(int *arr, int n){
    int minPrice=arr[0];     //initially take the first element
    int buyIndx=0, sellIndx=0;
    int maxProfit=0;
    for(int i=1; i<n; i++){
        //find current profit
        int currentProfit=arr[i]-minPrice;
        //update maxProfit
        if(currentProfit>maxProfit){
            maxProfit=currentProfit;
            sellIndx=i;
        }
        //update minPrice
        if(arr[i]<minPrice){
            minPrice=arr[i];
            buyIndx=i;
        }
    }
    cout<<"buy Stocks at arr["<<buyIndx<<"]= "<<arr[buyIndx]<<" and sell at arr["<<sellIndx<<"]= "<<arr[sellIndx];
    cout<<"\nMax Profit= "<<maxProfit;
}
int main(){
    int arr[]={1, 4, 3, 2, 8, 9, 8};
     int n=sizeof(arr)/sizeof(arr[0]);
    buySellStocks(arr,n);
}