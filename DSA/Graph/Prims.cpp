#include <stdio.h>    
#include <limits.h>    
#define vertices 5 
int min_key(int minW[], int mst[])    
{  
    int minimum  = INT_MAX, min,i;    
     
    /*iterate over all vertices to find the vertex with minimum key-value*/  
    for (i = 0; i < vertices; i++)  
        if (mst[i] == 0 && minW[i] < minimum )   
            minimum = minW[i], min = i;    
    return min;    
}  
void prim(int g[vertices][vertices])    
{    
    int total=0;
    int parent[vertices];    
   
    int minW[vertices];       
    int mst[vertices];      
    int i, count,edge,v; /*Here 'v' is the vertex*/  
    for (i = 0; i < vertices; i++)  
    {  
        minW[i] = INT_MAX;  
        mst[i] = 0;    
    }  
    minW[0] = 0; /*It select as first vertex*/  
    parent[0] = -1;    
    for (count = 0; count < vertices-1; count++)    
    {    
        edge = min_key(minW, mst);    
        mst[edge] = 1;    
        for (v = 0; v < vertices; v++)    
        {  
            if (g[edge][v] && mst[v] == 0 && g[edge][v] <  minW[v])    
            {  
                parent[v]  = edge, minW[v] = g[edge][v];    
            }  
        }  
     }    
     printf("\n Edge \t  Weight\n");  
     for (i = 1; i < vertices; i++)   { 
        printf(" %d <-> %d    %d \n", parent[i]+1, i+1, g[i][parent[i]]);   
        total+=g[i][parent[i]];
     }
      printf("Total Cost= %d",total);
}    
int main()    
{    
    //This is the given Graph's Adjacency Matrix ->
    int g[vertices][vertices] = {{0, 4, 5, 0, 0},    
                                 {4, 0, 0, 2, 0},    
                                 {5, 0, 0, 6, 1},    
                                 {0, 2, 6, 0, 3},    
                                 {0, 0, 1, 3, 0},    
                                };   
    prim(g);    
    return 0;  
}  