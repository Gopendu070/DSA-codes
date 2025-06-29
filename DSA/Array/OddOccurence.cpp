#include <iostream>
using namespace std;
int oddOccurence(int arr[], int size)
{
    int result = arr[0];
    for (int i = 1; i < size; i++)
    {
        result = arr[i] ^ result;
    }
    return result;
}
int main()
{
    int a[9] = {1, 1, 5, 2, 1, 5, 2, 5, 5};
    cout << "the odd occuring element is " << oddOccurence(a, 9);
    return 0;
}
