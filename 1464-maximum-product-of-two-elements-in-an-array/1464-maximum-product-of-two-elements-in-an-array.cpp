class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maix=0;
        int ans=1;

       int n=nums.size();
       for(int i=0;i<n;i++){
        for(  int j=i+1;j<n;j++){
          ans=(nums[i]-1)*(nums[j]-1);
          maix=max(maix,ans);}
       }
       return maix;
    }
}; 