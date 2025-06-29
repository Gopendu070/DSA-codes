#include<stdio.h>

int main(){
    int inputArr[]={1, 2, 3, 1, 4, 2, 1};
    int n, i, j, count;
    n=sizeof(inputArr)/sizeof(int);
    i=0;
    while(i<n){ 
        count=1;
        for(j=i+1; j<n; j++){
            
            if(inputArr[i]==inputArr[j]){
                count++;
                inputArr[j]=-999;
            }
        }
        
        if(inputArr[i]!=-999){
          printf("%d : %d times,  ", inputArr[i], count);
        }
        i++;
    }
    return 0;
}