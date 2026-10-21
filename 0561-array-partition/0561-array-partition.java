class Solution {
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        int t=0;
        for(int i=0;i<nums.length;i+=2){
            t+=nums[i];

        }
        return t;
    }
}