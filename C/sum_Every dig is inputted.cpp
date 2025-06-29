#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,sum=0,x;
	printf("Enter the number of terms ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter num%d",i);
		scanf("%d",&x);
		sum=sum+x;
	}
	printf("The sum of %d inputted number is %d",n,sum);
	
	return 0;
}
