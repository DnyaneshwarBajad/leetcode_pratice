class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int s = 0;
        for (auto i : nums) {
            s += i;
        }
        int ans = s - x;
        int c = 0;
        if (ans < 0) {
            return -1;
        }
        int l = 0, r = 0;
        int sum = 0;
        int len = 0;
        int maxlen = -1;
        while (r < nums.size()) {
            sum += nums[r];

            while (sum > ans) {
                sum -= nums[l];
                l++;
            }
            if (sum == ans) {
                len = r - l + 1;
                maxlen = max(len, maxlen);
            }
            r++;
        }
        
        if (maxlen == -1) {
            return -1;
        }

        return nums.size() - maxlen;
    }
};