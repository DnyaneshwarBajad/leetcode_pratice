class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
         vector<int>v(60,0);
        int n=time.size();
        for(int i=0;i<n;i++){
           int a=time[i]%60;
           if(a==0){
            count+=v[0];
           }else{
            count+=v[60-a];


           }v[a]++;
    
        }
        return count;
        
    }
};