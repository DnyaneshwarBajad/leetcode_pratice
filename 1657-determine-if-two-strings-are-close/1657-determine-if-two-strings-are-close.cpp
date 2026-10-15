class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<int>v1(26,0);
        vector<int>v2(26,0);


        if(m!=n){
            return false;
        }

        for(int i=0;i<n;i++){
            char ch=word1[i];
            char ch2=word2[i];

            v1[ch-'a']++;
            v2[ch2-'a']++;
        }
         for(int i=0;i<26;i++){
            if(v1[i]!=0 &&v2[i]!=0){
                continue;
            }
             if(v1[i]==0 &&v2[i]==0){
                continue;
            }

            return false;
         }
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
        
        return v1==v2;
    }
};