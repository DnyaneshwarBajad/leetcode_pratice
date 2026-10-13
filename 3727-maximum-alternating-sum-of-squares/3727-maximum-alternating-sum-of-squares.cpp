class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long> squ(n);

        for (int i = 0; i < n; i++) {
            squ[i] = 1LL * nums[i] * nums[i];
        }

        sort(squ.begin(), squ.end(), greater<long long>());

        long long sum = 0;
        for(int i=0;i<n;i++){
            if(i<(n+1)/2){
                sum+=squ[i];
            }
            else{
                sum-=squ[i];
            }
        }
           return sum;
    }
};