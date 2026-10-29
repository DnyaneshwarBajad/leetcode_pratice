class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mi = INT_MAX;
        int ans=0;
        for (auto i : nums) {

            int d = abs(i - 0);
            if(d<mi){
                mi=d;
                ans=i;
            }
            if(d==mi){
                ans=max(ans,i);
            }
        }
        return ans;
    }
};