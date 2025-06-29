#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Graph
{
private:
    int v;
    vector<int> *li; //li is a pointer which will point each member of the vector 
public:
    Graph(int V){  //constructor which takes no. of nodes
        this->v=V;
        li= new vector<int> [v];

    }
    void addEdge(int u, int v){
        
        li[u].push_back(v);
        li[v].push_back(u);
    }
    void printGraph(){
        for(int i=0; i<v; i++){
            cout<<"vertex "<<i<<" : ";
            for(int x: li[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    
};


int main(){
Graph g(6);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 3);
g.addEdge(4, 3);
g.addEdge(2, 5);
g.addEdge(5, 1);

g.printGraph();

return 0;
}