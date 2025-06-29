#include<stdio.h>

main()
{
    int  i, j ,k, l;
    for(i=1; i<=4; i++)
    {   int ch=65;
        for(j=4; j>=i; j--)
         printf(" ");

        for(k=1; k<=i; k++)
         printf("%c", ch++);
        
        ch--;

        for(l=1; l<i; l++)
         printf("%c", --ch);
    printf("\n"); 
    }

     for(i=1; i<=4; i++)
    {   int ch=65;
        for(j=4; j>=i; j--)
         printf(" ");

        for(k=1; k<=i; k++)
         printf("%c", ch++);
        
        ch--;

        for(l=1; l<i; l++)
         printf("%c", --ch);
    printf("\n"); 
    }
return 0;
}

