#include <stdio.h>
#include <conio.h>
int main()
{
	int n1,n2;
	printf("Enter 1st number: ");
	scanf("%d,%d",&n1);
	printf("\nEnter 2nd number: ");
	scanf("%d",&n2);
	if(n1>n2)
		printf("%d is greater than %d",n1,n2);
	else if(n1<n2) 
		printf("%d is lesser than %d ",n1,n2);
	
	else if(n1=n2)
		printf("%d is equal to %d",n1,n2);
	else
		printf("%d is not equal to %d",n1,n2);
	
  return 0;
}
