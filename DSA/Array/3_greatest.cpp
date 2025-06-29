#include<iostream>
#include<limits.h>
using namespace std;
void select(int array[], int size)
{
    int first,sec,third=INT_MIN;
    first=sec=third;
    for(int i=0;i<size;i++)
    {
        if(array[i]>first){
            third=sec;
            sec=first;
            first=array[i];
        }else if(array[i]>sec){
            third=sec;
            sec=array[i];
        }else if(array[i]>third){
            third=array[i];
        }
    }
     cout<<"The 3 greatest elements are => "<<first<<"\t"<<sec<<"\t"<<third;   
}
int main()
{
    int arr[]={3,41,7,8};
    int s=sizeof(arr)/sizeof(arr[0]);
    select(arr,s);
    return 0;
}