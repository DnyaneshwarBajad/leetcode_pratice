class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int m=*max_element(nums.begin(),nums.end());
        for(auto i:nums){
            c+=abs(i-m);
        }
        return c;
    }
};