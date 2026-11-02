class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            c+=min((nums[i]%3),abs(3-(nums[i]%3)));
        }
        return c;
    }
};