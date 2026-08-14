class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[n-1];
        unordered_set<int>st(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=a;i<=b;i++){
              if(st.count(i)==0){
                ans.push_back(i);
              }
        }
        return ans;
    }
};