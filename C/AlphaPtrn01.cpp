#include<stdio.h>
int main()
{
   int i,j, k, l;
 char c='A';

   for(i=65;i<=4+65;i++)
   {
		for(k=1;k<=5-i-65;k++)
		 printf("  ");
     for(j=65;j<=i;j++)
     {
       printf("%c ",j);
     }
     
     j=j-1;			//decreasing "j" by 1
     for(l=j;l>=1;l--)
     {	
     	if(l!=j)		//Omitting the FIRST iteration
     	printf("%c ",l);
	 }

     printf("\n");
   }

  return 0;
}
