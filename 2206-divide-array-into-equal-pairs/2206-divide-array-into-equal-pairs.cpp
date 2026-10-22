class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        int p=n/2;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        sort(nums.begin(),nums.end());
        for(auto i:mp){
            if(i.second%2!=0){
                return false;
                
            }
        }

        return true;
    }
};