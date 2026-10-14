class Solution {
public:
    int countHomogenous(string s) {
        long long total =0;
        int mod= 1e9 + 7;
        int n=s.size();
        int c=0;

        for(int i=0;i<n;i++){
            if(i>0 && s[i]==s[i-1]){
                c+=1;
            }
            else{
                c=1;
            }
            total+=c;
        }
        return  total%mod;
    }
};