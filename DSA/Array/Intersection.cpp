#include<bits/stdc++.h> 
using namespace std;

void Union(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
        {
            
            i++;
        }                       //first print a1[i]  --> then incriment i=i+1
        else if (a1[i] > a2[j])
        {
            
            j++;
        }
        else                // while a1[i]==a2[j]
        {
            cout << a1[i]<<"\t";
            i++;
            j++;
        }
    }
   
}
main()
{
    int arr1[5] = {1,2,4,5,6};
    int arr2[4] = {2,3,5,7};
    cout<<"INTERSECTION of two array is :  ";
    Union(arr1, arr2, 5, 4);
    return 0;
}