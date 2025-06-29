#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i,s=0;
	
	printf("Enter the no of terms ");
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		if(i%2==0)
		 s=s+i;
	}
	
	printf("Sum of first %d even numbers is %d",n,s);
	return 0;
}
