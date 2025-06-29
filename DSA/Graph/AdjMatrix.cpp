#include<iostream>
using namespace std;

int main(){
    int n;  //Number of nodes
    int m;    //Number of edges
    cin>>n;
    cin>>m;
    //declaring the Adjacency Matrix
    int adjM[n+1][n+1];
    fpr(int i=0; i<=m; i++){
        int u, v;
        cout<<"enter Node ";
        cin>>u;
        cout<<"enter AdjacentNode of Node ";
        cin>>v;
        adjM[u][v]=1;  //Marking their possition 
        adjM[v][u]=1;
    }

}