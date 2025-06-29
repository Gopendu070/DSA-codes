#include <stdio.h> 
int main()
{
    int i,k, j;
    for(i=1;i<=4;i++)
    {	
      for(k=1;k<=4-i;k++)
		 printf("  ");
        for(j=i;j>=1;j--)
        {
            printf("%c ",'A' + j-1);			//'A'=65  
        }									 //65+2-1=66=>'B'
        printf("\n");
    }
    return 0;
}
