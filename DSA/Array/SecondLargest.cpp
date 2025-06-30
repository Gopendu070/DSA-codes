#include<iostream>
#include<limits.h>
using namespace std;


int main()                
{
    int n=6;
    int arr[n]={78, 730, 39, 38, 7, 41};
    int largest, sec_largest;
    largest=INT_MIN; 
	sec_largest=INT_MIN;
    for(int i=0; i<n ; i++){
        if(arr[i]>largest)
        {
            sec_largest=largest;
			largest=arr[i];
            
        }
        else if (arr[i]>sec_largest && arr[i] != largest)
        {
            sec_largest=arr[i];
        }
        
    }

    cout<<"First largest number is  "<<largest;
    cout<<"\nSecond largest number is  "<<sec_largest;
    
}
