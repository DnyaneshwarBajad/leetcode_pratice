class Solution {
    public int[] arrayRankTransform(int[] arr) {
        
        int[] temp=new int[arr.length];

        for(int i=0;i<arr.length;i++){
            temp[i]=arr[i];
        }
        Arrays.sort(temp);


        Map<Integer,Integer>mp=new HashMap<>();
        int rank=1;

        for(int i=0;i<arr.length;i++){
            if(i>0 && temp[i]!=temp[i-1]){
                rank+=1;
            }
            mp.put(temp[i],rank);
        }

        int[] ranks=new int [arr.length];
        for(int i=0;i<arr.length;i++){
            ranks[i]=mp.get(arr[i]);
        }
  return ranks;
    }
}