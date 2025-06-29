#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i=1,sum=0,k=1;
	printf("Enter no. of terms ");
	scanf("%d", &n);
	while(k<=n)
	{
		
		sum=sum +pow( i,2);
		i+=2;
		k++;
	}
	printf("The sum is %d",sum);
  return 0;
}
