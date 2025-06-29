#include <stdio.h>
int main()
{int n=4,r,s,t,i,j,k;

//Loop 01
 for (r=1;r<=n;r++)					//
  {									//
  	for (s=1;s<r;s++)				//
  	  printf(" ");					//
  	for (t=7;t>=(2*r-1);t--)		//
	  printf("*");					//
	printf("\n");					//
  }									//
  									//
 //Loop 02 							//
  for(i=1;i<=n;i++)					//
  {									//
  if(i!=1)							//
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
}
return 0;
  
}
