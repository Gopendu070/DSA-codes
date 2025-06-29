#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Trap(vector<int>& height) {
    int n=height.size();
        int stored=0;
        for(i=n-1; i>=0; i--){
            //find next immediate greater or equal height on the left
            int j=i-1;
            for(){
                j--;
            }
            //find min among these
            int h=min(height[i], height[j]);
            for(int k=i)
        }
    }
int main(){
vector<int> heightArr={1,8,6,2,5,4,8,3,7};
cout<<Trap(heightArr);
}