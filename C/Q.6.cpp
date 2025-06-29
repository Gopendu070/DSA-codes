#include <stdio.h>
#include <conio.h>
int main()
{
	int x,y;
	printf("Enter the number ");
	scanf("%d",&x);
	printf("Enter next number ");
	scanf("%d",&y);
	
	if(x%y==0)
	 printf("%d is a multiple of %d",x,y);
	else
	 printf("%d is not a multiple of %d",x,y);
	 
return 0;	 

}
