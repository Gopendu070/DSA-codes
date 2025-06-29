#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,sum=0,n;
	printf("enter number of terms \t");                 // 1*1 + 3*4 + 5*7 + 7*10 + 9*13 + 11*16...
	scanf("%d",&n);
	if(n==1)
	  sum=1;
	else
	{
    	for(i=1, j=1,k=1;k<=n;i=i+2,j=j+3,k++)
	   {
			sum =sum+(i*j);
    	}
	}
    
    printf("The sum of %d terms is %d",n,sum);
    getch();
 return 0;
}
