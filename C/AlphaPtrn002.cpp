#include<stdio.h>

main()
{
    int  i, j ,k, l;
    for(i=1; i<=4; i++)                         //    A
    {   int ch=65;                              //   ABA
        for(j=4; j>=i; j--)                     //  ABCBA
         printf(" ");                           // ABCDCBA
    
        for(k=1; k<=i; k++)             
         printf("%c", ch++);
        
        ch--;

        for(l=1; l<i; l++)
         printf("%c", --ch);
    printf("\n"); 
    }

}

