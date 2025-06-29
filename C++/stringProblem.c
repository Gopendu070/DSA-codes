#include <stdio.h>

int main()
{
    
    char str1[5];
    char str2[5];
    int I = 0, J = 0;
    
    scanf("%s", str1);
    scanf("%s", str2);

    for(int i =0; i<5; i++){
        printf("%c_%c\n",str1[i],str2[i]);
        if(str1[i] == str2[i]){
            
            i++;
        }
        
        for(int j = 0; j < 5; j++){
            
            if((i != j) && str1[i] == str2[j]){
                J++;
            }
            
        }
        
    }
    
    printf("%d#%d", I, J);
    

    return 0;
}