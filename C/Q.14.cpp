#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i,sum=0,x;
	printf("Enter number of terms\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
	{
	  printf("\nEnter Number%d ",i);
	  scanf("%d",&x);
	  sum = sum+x;
	}
	
	printf("The sum of all the inputted numbers is  %d",sum);
	
	getch();
}
