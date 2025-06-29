#include <iostream>
using namespace std;

void Union(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
        {
            cout << a1[i];
            i++;
        } //first print a1[i]  --> then incriment i=i+1
        else if (a1[i] > a2[j])
        {
            cout << a2[j];
            j++;
        }
        else // while a1[i]==a2[j]
        {
            cout << a1[i];
            i++;
            j++;
        }
    }
    while (i < m)
      {  cout << a1[i++]; }
    while (j < n)
      {  cout << a2[j++];  }
}
main()
{
    int arr1[5] = {1,2,4,5,6};
    int arr2[4] = {2,3,5,7};
    Union(arr1, arr2, 5, 4);
    return 0;
}
