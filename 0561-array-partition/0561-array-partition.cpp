class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int t=0;
        for(int i=n-1;i>=0;i-=2){
            int a=nums[i];
            int b=0;
            if(i>0){
                 b=nums[i-1];
            }
            int ans=min(a,b);
            t+=ans;
        }
        return t;
    }
};