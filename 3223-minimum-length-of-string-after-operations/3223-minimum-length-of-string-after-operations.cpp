class Solution {
public:
    int minimumLength(string s) {
        vector<int>mp(26,0);

        for( char ch:s){
            mp[ch-'a']++;

        }
          int ans=0;
        for( int freq :mp){
            if(freq==0){
                continue;
            }
            if(freq %2==0){
                ans+=2;
            }
            else{
                ans+=1;
            }
        }
        return ans;
    }};