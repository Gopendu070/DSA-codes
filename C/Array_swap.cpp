#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void reverse ( int array[], int size)
{   for(int i=0;i<=2;i++)
{
       int temp = array[i];
       array[i]=array[(size-1)-i];
       array[(size-1)-i]=temp;
}
}

int main()
{
    int arr[7]={2,8,9,7, 5,3,4};
   
    printf("Before : \n");
    for (int i = 0; i < 7; i++)
     printf("%d\t", arr[i]);
    
     reverse(arr, 7);
 
    printf("\nAfter : \n");
     for (int i = 0; i < 7; i++)
     printf("%d\t", arr[i]);

    

    
    return 0;
}
