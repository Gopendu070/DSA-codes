#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

main()
{
    int n = 6;
    int arr[n] = {2, 14, 9, 7, 3, 5};
    vector<int> leaders;
    // for (int i = 0; i <n ; i++)
    // {  int j ;
    //     for (j= i+1 ; j < n; j++)
    //     {
    //         if (arr[j] > arr[i])
    //            break;  
    //     }
    // if(j==n)
    //  cout<<"The LEADER is "<<arr[i]<<"\n";
    // }
    int maxE=arr[n-1];
    leaders.push_back(maxE);
    for(int i=n-2;  i>=0; i--){  //traversing from the back
        if(arr[i]>maxE){
            maxE=arr[i];
            leaders.push_back(maxE);
        }
    }
    //revers
    reverse(leaders.begin(), leaders.end());
    cout<<"Leaders"<<endl;
    for(int x : leaders){
        cout<<x<<" ";
    }

 return 0;   
}