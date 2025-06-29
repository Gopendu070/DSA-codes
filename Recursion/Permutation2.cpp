#include<iostream>
#include<vector>
using namespace std;

class permuteClass{            // T.C = O(n! * n)            // S.C= O(n)
  public:  
    void swap(int i, int j, vector<int> &num){
        int temp=num[i];
        num[i]=num[j];
        num[j]=temp;
    }

    void recurePermute(int ind,  vector<int> &num, vector<vector<int>> &ans){
        if(ind == num.size()){     
            ans.push_back(num);        // Adding num to ans
            return;
        }

        for(int i=ind; i<num.size(); i++){
            swap(ind, i, num);
            
            recurePermute(ind+1, num , ans);   // Move to the next ind

            swap(ind, i, num);      // Reswap them to backtrack while returning
        }
    }

   vector<vector<int>> permutation(vector<int> &num){
        vector<vector<int>> ans;

        recurePermute(0, num, ans);
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