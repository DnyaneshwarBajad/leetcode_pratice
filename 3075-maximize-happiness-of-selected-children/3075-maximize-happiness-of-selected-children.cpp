class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(), greater<int>());
        int i=0;
        long long sum=0;
        while(k--){
           int a=happiness[i]-i;
           if(a<0){
            a=0;
           }
           sum+=a;
           i++;
        }

        return sum;
    }
};