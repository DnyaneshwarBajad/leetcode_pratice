class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=nums[nums.size()/2];
        int c=0;
        for(auto i:nums){
            c+=abs(i-m);
        }

        return c;

        
    }
};