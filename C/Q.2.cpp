#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n>100)
	 printf("%d is greater than 100",n);
	else if(n<100)
	 printf("%d is lesser than 100",n);
	else if(n=100)
	 printf("%d is equal to 100",n);
 return 0;
}
