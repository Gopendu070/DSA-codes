#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5}, temp, k;
    scanf("Enter No of rotation %d", &k);
    for (int j = 0; j <= k; j++)
    {
        temp = arr[0];
        for (int i = 0; i < (n - 1); i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    return 0;
}
