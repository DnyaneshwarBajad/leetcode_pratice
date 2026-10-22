class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n=s.size();
        int ans=0;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                a++;
            }

        }
        b=n-a;
        if(a==b){
            return 0;
        }else{
           ans= max(a,b)-min(a,b);
        }
        return ans;
    }

    
};