#include<iostream>
using namespace std;

int main(){
    int arr[]={23, 34, 31, 37, 28, 21};
    int arr2[6]={0,0,0,0,0,0};
    int avg, s=0;
    for (int i=0; i<6;i++){
        s=s+arr[i];
    }
    avg=s/6;
    printf("The aveerage is %d\n", avg);
    for (int i=0; i<6;i++){
         int e=avg-arr[i];
         printf("%d\n", e);
            if(e<=0)
            { arr2[i]=-e;}
           else
             {  arr2[i]= e;}
    }
    for (int i=0; i<6;i++){
        printf("%d ",arr[i]);
    }

}