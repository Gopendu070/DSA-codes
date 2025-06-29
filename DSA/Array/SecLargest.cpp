#include <iostream>
#include <limits.h>
using namespace std;

#define n 6
int main()
{
    int arr[n] = {23, 30, 80, 38, 37, 41};
    int l1, l2;
l1 =l2 = INT_MIN;                                                                      //For Sec Smallest:-  INT_MAX
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > l1)                                             //For Sec Smallest:-   arr[i]<l1
        {
            l2 = l1;
            l1 = arr[i];
        }
        else if (arr[i] > l2 && arr[i] < l1)                          //For Sec Smallest:-  (arr[i] < l2 && arr[i] > l1)
        {
            l2 = arr[i];
        }
    }

    cout << "First largest number is  " << l1;
    cout << "\nSecond largest number is  " << l2;
}