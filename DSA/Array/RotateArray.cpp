#include <iostream>
#include <algorithm>
using namespace std;

void rotateByReversing(int * arr, int n, int k){
    //STEPS
    //Desired o/p :-  1, 2, 3, 4, 5  ----(k=2)----> [4, 5, 1, 2, 3]

    // break the original array in two parts from the pivot(i.e. n-k) and reverse them
    // 1, 2, 3 || 4, 5  ----------->  3, 2, 1 || 5, 4 
    //Now merge them and reverse the whole array again
    // 3, 2, 1, 5, 4  -------------> 4, 5, 1, 2, 3   [Answer]

    // reverse 0 to n-k
    reverse(arr, arr+n-k);
    // reverse n-k to n
    reverse(arr+n-k, arr+n);
   
   //Now reverse the whole arrayay
   reverse(arr, arr+n);
}

void rotatteByShifting(int *arr, int n, int k){
    int temp;
    for (int j = 1; j <= k; j++)
    {
        // backward rotation
            temp = arr[n-1];
            for (int i = n-1; i >=0; i--)
            {
               
                arr[i] = arr[i-1];                       //shifting
               
            }
            arr[0] = temp;
    }
}
int main()
{
    int arr[] = {1}, temp, k;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter No of Rotation: ";
    cin>>k;
    k=k%n;
    //optimal :
    rotateByReversing(arr, n, k);

    //Bruteforce :
    // rotatteByShifting(arr, n, k);
    

    cout<<"After rotation"<<endl;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}