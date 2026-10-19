class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
         Arrays.sort(arr);
        List<List<Integer>>ans=new ArrayList<>();
        int dif=0;
        int mi=Integer.MAX_VALUE;
        int a=arr[0];
        int n=arr.length;
        for(int i=1;i<n;i++){

          int diff=arr[i]-arr[i-1];
          mi=Math.min(mi,diff);
          
        }
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])==mi){
                ans.add(Arrays.asList(arr[i-1],arr[i]));
            }
        }
        return ans;
   
    }
}

