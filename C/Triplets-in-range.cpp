#include<stdio.h>
#include<math.h>

int main()
{
    int l, h;
    float n;
    printf("Enter lower limit: ");
    scanf("%d", &l);
     printf("Enter upper limit: ");
     scanf("%d",&h);
   
    for(int i=l; i<=h; i++)
    {
        for(int j=i; j<=h; j++)
         {
             n=sqrt((i*i)+(j*j));
             if(n==(int)n)
              printf("(%d, %d, %d)\n",i ,j ,(int)n);
         }
    }
    printf("\t are the TRIPLETs in between %d and %d", l, h);    
    return 0;
}