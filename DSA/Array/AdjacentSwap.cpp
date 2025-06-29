#include<stdio.h>
void swapArr(int arr[])
{
     int temp;
    for(int i=0; i<6;i=i+2)
    {
      temp = arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
}
main()
{
    int arr[6]={1,2,3,4,5,6};
   printf("Before SWAP :\n");
    for(int i=0; i<6;i++)
    {
        printf("\t %d", arr[i]);
    }
    swapArr(arr);
  printf("\nAfter SWAP :2\n");
   for(int i=0; i<6;i++)
    {
        printf("\t %d", arr[i]);
    }
}