#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int MinDist(int a[], int n, int x, int y) // 3, 5*, 2, 7, 6*
{
    int min = INT_MAX;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((a[i] == x && a[j] == y) || (a[i] == y && a[j] == x) && min < abs(i - j))
            {

                min = abs(j - i);
                break;
            }
        }
    }
return min;
}
main()
{
    int arr[5] = {3, 5, 2, 7, 6};
    int min_Dist;
    min_Dist = MinDist(arr, 5, 5, 6);
    printf("Distance b/w 5 and 6 is  %d", min_Dist);
}
