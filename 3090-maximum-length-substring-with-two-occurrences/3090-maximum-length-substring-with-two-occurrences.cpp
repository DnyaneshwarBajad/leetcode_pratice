class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int j=0,ans=0,len=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            mp[c]++;
            if(mp.find(c)!=mp.end() && mp[c]>2){
                
              while( mp[c]>2) { mp[s[j]]--;
                
                if(mp[s[j]]==0){
                    mp.erase(s[j]);
                }j++;}
            }
            
            ans=max(i-j+1,ans);
        }
        return ans;
    }
};