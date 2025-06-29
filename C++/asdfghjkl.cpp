#include <stdio.h>


int main()

{

float f;

int i;

printf("Enter a number : ");

scanf("%f",&f);

i=f;
printf("%d ",i);
if(i==f)

printf("\nYou have Entered an Intiger number");

else

printf("\nYou have Entered a float number");

}