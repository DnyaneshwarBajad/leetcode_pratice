class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        sort(tasks.begin(),tasks.end());

        unordered_map<int,int>mp;
         for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        int c=0;
        int ans=0;
       for(auto freq:mp){
        if(freq.second==1){
            return -1;
        }
        if(freq.second %3==0){
            ans+=freq.second/3;

        }
        else {
            ans+=(freq.second/3)+1;

        }
       }
        return ans;
          
        
    }
};