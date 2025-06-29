
#include<bits/stdc++.h>
using namespace std;
bool dfsSearch(int n, vector<vector<int>>& adjacent, vector<bool>& vis, vector<int>& parent) {
    vis[n] = true;

    for(auto x: adjacent[n]){
        if(!vis[x]){
            parent[x]=n;
            if(dfsSearch(x, adjacent, vis, parent)){
                return true;
            }
        }else if(x!=parent[n]){
            return true;
        }
    }

    return false;
}

int detectCycle(int a, vector<vector<int>>& b){
    vector<vector<int>> adjacent(a+1);
    for(auto & e:b){
        adjacent[e[0]].push_back(e[1]);
         adjacent[e[1]].push_back(e[0]);
    }

    vector <bool> vis(a+1, false);
    vector<int> p(a+1, -1);
    for(int i=1; i<=a; i++){
        if(!vis[i]){
            if(dfsSearch(i, adjacent, vis, p)){
                return 1;
            }
        }

    }
    return 0;
}


int main() {
   
    int a=5;
 
    vector<vector<int>> b={
        {1,2},
        {1,3},
        {2,3},
        {1,4},
        {4,5},
    };
    
    cout<<detectCycle(a,b);
  
   
    return 0;
}