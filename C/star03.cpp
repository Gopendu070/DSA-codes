#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,r,s,t;
  int n=4;
  for(i=1;i<=n;i++)
  {	
  for(k=1;k<=(n-i);k++)
  {
  	printf(" ");
  }
  	for(j=1;j<=(2*i-1);j++)
  	{
  		printf("*");
	}
	  printf("\n");
  }
  
  for (r=2;r<=n;r++)     //for double pyramid put, "r=1"
  {
  	for (s=1;s<r;s++)
  	  printf(" ");
  	for (t=7;t>=(2*r-1);t--)
	  printf("*");
	  
	printf("\n");
	}
  
 return 0;
}
