class Solution {
    public int sumDivisibleByK(int[] nums, int k) {
        Map<Integer,Integer>mp=new HashMap<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
          mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(mp.get(nums[i])%k==0){
               sum+=nums[i];
            }
        }
        if(sum!=0){
            return sum;
        }
         return 0;
}
    }
   