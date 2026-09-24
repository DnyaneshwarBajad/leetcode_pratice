class Solution {
public:
    int digitsum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int m=nums.size();
        for(int i=0;i<m;i++){
            if(i==digitsum(nums[i])){
                return i;
            }
        }
        return -1;
        
    }
};