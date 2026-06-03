#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int robMemo(int i, vector<int>& nums, vector<int>& dp){
  if(i==0){
    return nums[0];}
  if (i < 0) return 0;
  if (dp[i] != -1) return dp[i];
  int pick=robMemo(i-2,nums,dp)+nums[i];
  int skip = robMemo(i - 1, nums, dp);
    return dp[i] = max(pick, skip);
  
}

int robTab(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    vector<int> dp(n);
    dp[0] = nums[0];
    if (n > 1) dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
    }

    return dp[n - 1];
}

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};
    int n = nums.size();
    vector<int> dp(n, -1);

    cout << "Memoized: " << robMemo(n - 1, nums, dp) << endl;
    cout << "Tabulation: " << robTab(nums) << endl;
   // cout << "Space Optimized: " << robSO(nums) << endl;

    return 0;
}