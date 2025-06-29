#include <iostream>                      // https://www.youtube.com/watch?v=lBk6fVhuCyw&list=PLqM7alHXFySEQDk2MDfbwEdjd2svVJH9p&index=3
#include<vector>
using namespace std;
int FindMissingByXOR(int arr[], int n)   
{
    int i;
    int x1 = arr[0];
    int x2 = 1;
    for (i = 1; i < n; i++)
    {
        x1 = x1 ^ arr[i];
    }
    cout<<"x1= "<<x1;
    for (i = 2; i <= n + 1; i++)
    {
        x2 = x2 ^ i;
    }
    cout<<"\nx2= "<<x2<<endl;

    return (x1 ^ x2);
}

int findByHashing(int *arr, int n){
    vector<int> isPresent(n+1,0);   // available index 0, 1 , 2,....,8
    for(int i=0; i<n; i++){
        if(isPresent[arr[i]]==0){
            isPresent[arr[i]]=1;
        }
    }
    // Now each element is marked as either present(1) or absent(0)
    for(int i=1; i<isPresent.size(); i++){
        if(isPresent[i]==0){
            return i;
        }
    }
    
}
main()
{
    int arr[] = {1, 2, 6, 3, 5, 4, 8, 7, 9, 11, 12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m = FindMissingByXOR(arr, n);
    // int m = findByHashing(arr, n);
    printf("Missing is element is  %d", m);
}