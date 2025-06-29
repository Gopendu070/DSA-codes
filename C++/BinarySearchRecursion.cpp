#include <iostream>
using namespace std;

int BinarySearch(int arr[], int x, int low, int high)
{
    int mid = (low + high) / 2;
    if (low <= high)
    {
        if (arr[mid] == x)
            return mid;
        else if (x > arr[mid])
        {
            BinarySearch(arr, 7, mid + 1, high);
        }
        else if(x < arr[mid])
        {
            BinarySearch(arr, 7, low, mid - 1);
        }
        else
        	exit(0);
        
    }
}

main()
{
    int a[5] = {2, 4, 6, 7, 9};
    int e;
    cout << "Enter element to find ";
    cin >> e;
    cout << "\nElement is at index " << BinarySearch(a, e, 0, 4);
}
