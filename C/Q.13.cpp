#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,c,sum=0,n;
	printf("enter number of terms ");                 // 1*1^2 + 2*3^2 + 3*5^2 + 4*7^2...
	scanf("%d",&n);
	if(n==1)
	  sum=1;
	else
	{
    	for(i=1, j=1;i<=n;i++,j=j+2)
	   {
	   	  c=j*j;
			sum =sum+(i*c);
    	}
	}
    
    printf("The sum of %d terms is %d",n,sum);
    getch();
 return 0;
}
