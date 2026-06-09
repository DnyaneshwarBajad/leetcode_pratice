#include<iostream>
#include<vector>

using namespace std;

class solution{
 
    public:
    int maxArea (vector<int>&height){
        int mArea=0;
        int l=0;
        int r = height.size() - 1;
         while (l < r) {
            mArea = max(mArea, (r - l) * min(height[l], height[r]));

            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return mArea;
    }
};

int main(){
     vector<int> height = {1,8,6,2,5,4,8,3,7};

     solution obj;
     cout<<obj.maxArea(height);
     return 0;

}