class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        unordered_map<int,int>m1;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        for (auto i : mp) {
            m1[i.second]++;
        }

        for(int i=0;i<n;i++){
            if(m1[mp[nums[i]]]==1){
                return nums[i];
            }
        }
        
        return -1;
       
    }
};