class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();
        vector<int>ans;

        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for (int x : nums) {
            mp[x]++;
        }
       
        for(int x:nums){
            if(mp[x]>=2){
                continue;
            }
            else if(mp.find(x+1)==mp.end() && mp.find(x-1)==mp.end()){
                ans.push_back(x);
            }
        }
        return ans;
        
    }
};