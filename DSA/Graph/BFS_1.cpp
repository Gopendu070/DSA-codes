/*
An adjacency matrix is a way of representing a graph as a matrix of booleans (0's and 1's).
 A finite graph can be represented in the form of a square matrix on a computer,
  where the boolean value of the matrix indicates if there is a direct path between two vertices.
*/

#include <iostream>
#include <malloc.h>
#include<queue>
using namespace std;

int main(){
    queue<int> ExplorationQ;
    
    int visited[6]={0, 0, 0, 0, 0, 0}; // At first Marking every node  as  unvisited
    
    int AdjMatrix[6][6]={                                /* GRAPH:         0            */         
        {0, 1, 0, 1, 0, 0},                              /*              /   \          */
        {1, 0, 0, 0, 0, 0},                              /*            1     3          */
        {0, 0, 0, 1, 1, 1},                              /*                /  |         */
        {1, 0, 1, 0, 0, 1},                              /*           4-- 2   |         */
        {0, 0, 1, 0, 0, 0},                              /*                \  |          */
        {0, 0, 1, 1, 0, 0}};                             /*                 \ |          */
                                                         /*                  \5          */
    
    int inp;
    cout<<"ENter source Node: ";
    cin>>inp;
    int sourceNode=inp;
    //As sourceNode=> 0 is visited mark its position in the visited list as 1
    visited[sourceNode]=1;
    //Now enqueue the node inot the ExplorationQ
    ExplorationQ.push(sourceNode);
    cout<<sourceNode<<" ";
   
    while(ExplorationQ.empty()== false){
            int currNode;
            currNode=ExplorationQ.front();  // To store in currNode
            ExplorationQ.pop();             // and then pop

            for(int i=0; i<6; i++){
                if(AdjMatrix[currNode][i]==1 && visited[i]==0) //check currNode & i have a connection AND node i isn't visited yet
                {  
                    cout<<i<<" ";
                    visited[i]=1;
                    ExplorationQ.push(i);
                }
            }
    }

return 0;

}
