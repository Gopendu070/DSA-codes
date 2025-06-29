#include <stdio.h>
#include <conio.h>
int minimum(int x, int y)
{ int i;
if(x<y)
{ i=x; }
else
{ i=y; }
return i;
}
 int main() {
int n1, n2, n3, n4,m1, m2,M;
printf ("Enter 1st number ");
scanf("%d",&n1);
printf ("Enter 2nd number ");
scanf("%d",&n2);
printf ("Enter 3rd number ");
scanf("%d",&n3);
printf ("Enter 4th number ");
scanf("%d",&n4);
m1=minimum(n1, n2);
m2=minimum(n3, n4);
M=minimum(m1, m2);
printf ("The minimum value is %d",M);
return 0;
}
