#include<iostream>
#include<cmath>
using namespace std;
int getFare(int *dist, string *stopage, string s, string d){
    int farePerKm=5;
    string target = s;
    float total=0;
   int i=0;
    int j=0;
    if(s==d){
        for(int x=0; x<8;x++)
            total+=dist[x];
    }
    while(target != d){
        i++;
        target=stopage[i];
        total+=dist[j++];
    }
    float km=total/1000;
  
    return (ceil(km)*farePerKm);
}
int main(){
    int dist[]={800,600,750,900,1400,1200,1100,1500};
    string stopage[]={"s1","s2","s3","s4","s5","s6","s7","s8"};
    int f=getFare(dist, stopage, "s1", "s6");
    cout<<"Total fare = "<<f;
    return 0;
}