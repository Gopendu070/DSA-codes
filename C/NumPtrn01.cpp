#include<stdio.h>
int main()
{
   int i,j, k, l;

   for(i=1;i<=4;i++)
   {
		for(k=1;k<=5-i;k++)
		 printf("  ");
     for(j=1;j<=i;j++)
     {
       printf("%d ",j);
     }
     
     j=j-1;			//decreasing "j" by 1
     for(l=j;l>=1;l--)
     {	
     	if(l!=j)		//Omitting the FIRST iteration
     	printf("%d ",l);
	 }

     printf("\n");
   }

   return 0;
}
