#include <stdio.h>
#include <conio.h>

int main()
{
	int l,u,n;
	printf("Enter upper limit ");
	scanf("%d",&u);
	printf("Enter lower limit ");
	scanf("%d",&l);
	if(l<u)
		{
	printf("\nEnter the number ");
	scanf("%d",&n);	
		if(n<=u && n>=l)
	  	  printf("%d falls in between %d and %d",n,l,u);
		else
	      printf("%d does not fall in between %d and %d",n,l,u);
		}
	else
	 printf("\nUpper limit can't be lesser than lower limit");
	 
return 0;
}
