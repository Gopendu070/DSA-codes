#include<iostream>
using namespace std;
int main()
{
  int n, temp;
  for(n=140; n<=148; n++)
  {
     int f=1;
     int s=0;
       temp=n;
     for(int i=1;i<=3;i++)
     {
         int x=n%10;
         for (int j=1;j<=x;j++)
         {
             f=f*j;
             cout<<f;
         }
        
    //     s=s+f;
    //     n=n/10;
      }
    //  if(s==temp)
    //  {
    //      cout<<s<<"is krisnamurti";
    //  }
      
  }
}
