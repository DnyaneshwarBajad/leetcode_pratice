class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int,int>mp;
        int n=s.size();
      char ans;
        for(int i=0;i<n;i++){
            char c=s[i];
            mp[c-'a']++;

            if(mp[c-'a']==2){
             ans=s[i];
                break;
            }

        }
       
        return ans;
    }
};