#include <stdio.h>
#include <conio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers:\n");
	scanf("%d\n%d\n%d",&n1,&n2,&n3);
	
	if(n1<n2 && n1<n3)
	 printf("%d is the smallest",n1);
	else if(n2<n1 && n2<n3)
	 printf("\n%d is the smallest",n2);
	else
	 printf("\n%d is the smallest",n3);
return 0;
}
