#include <stdio.h>
int main(void) {
	// your code goes here
	int T; char n;
	scanf("%d",&T);
	while(T>=0){
	   printf("Enter char: \n");
	    scanf("%c",&n);
	    if(n=='f'||n=='F')
	    printf("Frigate\n");
	    else if(n=='d'||n=='D')
	   printf("Destroyer\n");
	   else if(n=='c'||n=='C')
	   printf("Cruiser\n");
	   else if(n=='b'|| n=='B')
	   printf("BattleShip\n");
	}
	return 0;
}
