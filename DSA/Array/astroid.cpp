#include<iostream>
#include<vector>
using namespace std;

vector<int> asteroidCollision(vector<int>& ast) {
        int n=ast.size();
        vector<int> res;
        res.push_back(ast[0]);
       
        for(int i=1; i<n; i++){
            cout<<"loop====== "<<i<<endl;
            cout<<"bck="<<res.back()<<endl;
              cout<<"ast[i]="<<ast[i]<<endl;
              if(ast[i]>0 && res.back()<0)
                res.push_back(ast[i]);

           else if(( ast[i]>0 && res.back()>0) || ( ast[i]<0 && res.back()<0)){
                res.push_back(ast[i]);   
            }else{
                cout<<"else part"<<endl;
                int back=res.back();
                cout<<"bck="<<back<<endl;
              
                if(back>0 && ast[i]<0){
                    cout<<"in"<<endl;
                    while(res.size()>0 && ( ast[i]<0 && res.back()>0) && abs(ast[i])>back){
                        cout<<"in while"<<endl;
                        res.pop_back();
                    }
                    if(abs(ast[i])<back)
                        continue;
                    res.push_back(ast[i]);
                }
            }
        }
        return res;
    }

int main(){
    vector<int> ast={5, 6, -8,19,9, -17,7};
    vector<int> res;
    res=asteroidCollision(ast);
   
    for(auto x:res){
        cout<<x<<" ";
    }
}
