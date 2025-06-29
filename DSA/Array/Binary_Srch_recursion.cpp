#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int x, int low, int high)
{
    if(low>high){
        return -1;
    }
    int mid = (low + high) / 2;
    if (low <= high)
    {
        if (arr[mid] == x)   // if found
            return mid;

        else if (x > arr[mid]) {    // element exist on the right part of the array
            BinarySearch(arr, x, mid + 1, high);
        }

        else if(x < arr[mid]) {    // element exist on the right part of the array
            BinarySearch(arr, x, low, mid - 1);
        }
        
    }
}

main()
{
    int a[] = {2, 4, 6, 1, 7, 9, 11};
     int n = sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    for(auto i:a){
        cout<<i<<" ";
    }
    int e;
    cout << "\nEnter element to find: ";
    cin >> e;
    if(BinarySearch(a, e, 0, n)==-1){
        cout<<"\nElement not found";
    }else
    cout << "\nElement is at index: " << BinarySearch(a, e, 0, n);
}