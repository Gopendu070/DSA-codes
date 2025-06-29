#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(int a[], int n){
    vector<int> v;
    stack<pair<int, int>> stk;              // pair=> (Element, index)
    int s;
    for(int i=0; i<n; i++){

        if(stk.size()==0)     
            v.push_back(1);
        
        else if(stk.top().first > a[i] )
            {
                s= i - stk.top().second;
                v.push_back( s );
            }
    
        else if(stk.top().first <= a[i])
            {
                while(stk.size()!=0 && stk.top().first <= a[i])
                    stk.pop();
                
                if(stk.size()==0)       //whenever the stk is EMPTY, it means everything exist in the left is < current element
                    v.push_back(i+1);   //so we're pushing (1+ index of current element)

                else if(stk.top().first > a[i])
                {
                    s= i - stk.top().second;
                    v.push_back( s );
                }
            }
        stk.push({a[i],i});      //pushing  a pair into the stack
    }
    return v;
}

// Approach_2 :-    [EASIER APPROACH]
// step1: We can simply store the index of each NGL in vector 'v'
// step2: for(int i=0; i<v.size(); i++)
//          {
//             v[i] = i - v[i];
//          }

int main(){
    int Stock[]={80, 60, 75, 85, 50, 60, 100};
    int n=sizeof(Stock)/sizeof(int);
    vector<int> span=stockSpan(Stock, n);
    cout<<"The Stock Span is= \n";
    for(int it:span)
        cout<<it<<", ";
}