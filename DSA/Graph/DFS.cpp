                                /*          DFS without using stack           */
#include <iostream>
using namespace std;


    //Declaring the Array and the Matrix Globally
    int visited[6]={0, 0, 0, 0, 0, 0}; // At first Marking every node/vertex  as  unvisited

    
    int AdjMatrix[6][6]={                                /* GRAPH:         0            */         
        {0, 1, 0, 1, 0, 0},                              /*              /   \          */
        {1, 0, 0, 0, 0, 0},                              /*            1     3          */
        {0, 0, 0, 1, 1, 1},                              /*                /  |         */
        {1, 0, 1, 0, 0, 1},                              /*           4-- 2   |         */
        {0, 0, 1, 0, 0, 0},                              /*                \  |          */
        {0, 0, 1, 1, 0, 0}};                             /*                 \ |          */
                                                         /*                  \5          */        


void DFS(int currVertex){
    int adjVertex;
        cout<<currVertex<<" ";
        visited[currVertex]=1;
    for(adjVertex=0; adjVertex < 6; adjVertex++){

      if(AdjMatrix[currVertex][adjVertex] == 1 && visited[adjVertex] == 0) 
        {   DFS(adjVertex);     }
    }
}

int main(){

    int inp;
    cout<<"ENter source Node: ";
    cin>>inp;
    int sourceNode=inp;
    DFS(sourceNode); 

 return 0;  
}