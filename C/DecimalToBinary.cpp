#include<iostream>
#include<limits.h>
using namespace std;
void convert(int n)
{
    int arr[100],x, k=0;
    for(int i=0;n!=0;i++)
    {
        x= n%2;
        arr[i]=x;
        k++;
        n/=2;
    }
cout<<"The converted Binary number is \n";
        for (int i=k-1; i>=0 ; i--)
        {
            cout<<arr[i]<<"\t";
        }
        
}
int main()
{
    int n;
    cout<<"Enter Decimal number \n";
    cin>>n;
    convert(n);
    
    return 0;
}