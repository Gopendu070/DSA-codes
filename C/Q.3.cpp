#include <stdio.h>
#include <conio.h>

int main() 
{
    int x, i=0, r;
    printf("Enter the number to be checked: ");
    scanf("%d",&x);
    while(x>0)
    {
    
        x/=10;
        i++;
    }
    if(i==3)
printf(" The number is a 3 digit number");
    else
printf("The number is not a 3 digit number");

return 0;
}
