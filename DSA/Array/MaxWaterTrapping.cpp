#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxArea(vector<int>& height) {
        int maxArea=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int Height=min(height[l], height[r]);
            int width=r-l;
            int currArea=Height*width;
            maxArea=max(maxArea, currArea);
            if(Height==height[l])
                l++;
            else
                r--;
        }
        return maxArea;
    }
int main(){
vector<int> heightArr={1,8,6,2,5,4,8,3,7};
cout<<maxArea(heightArr);
}