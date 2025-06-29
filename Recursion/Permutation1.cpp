#include<iostream>
#include<vector>
using namespace std;

class permuteClass{            // T.C = O(n! * n)            // S.C= O(n)+O(n)  [the pick arrayvtakes the extra O(n), the oxilarry S.C is ignored here]
 protected:
    void recurePermute(vector<int> &ds, vector<int> &num, vector<vector<int>> &ans, int pick[]){
        if(ds.size()==num.size()){          //Whenever 'ds' takes all the elements available in 'num'
            ans.push_back(ds);
            return;
        }

        for(int i=0; i<num.size(); i++){
            if(!pick[i]){
                ds.push_back(num[i]);
                pick[i]=1;              //Taking the element and mark its pos as 1

                recurePermute(ds, num, ans, pick);

                ds.pop_back();          //After returning the last element has been popped out and marke as 0
                pick[i]=0;
            }

        }
    }
  public:  
   vector<vector<int>> permutation(vector<int> &num){
        vector<vector<int>> ans;
        vector<int> ds;
        int n=num.size();
        int pick[n]={0};
        recurePermute(ds, num, ans, pick);
        return ans;
    }

    void printAll(vector<vector<int>> &res){
    for (auto it:res){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
};

int main(){
    vector<int> nums={1, 3, 2};
    vector<vector<int>> result;
    permuteClass p;
    result=p.permutation(nums);
    p.printAll(result);
}