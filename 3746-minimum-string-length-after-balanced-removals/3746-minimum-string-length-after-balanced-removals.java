class Solution {
    public int minLengthAfterRemovals(String s) {
        int n=s.length();
        int ans=0;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='a'){
                a++;
            }

        }
        b=n-a;

        ans=Math.max(a,b)-Math.min(a,b);
        return ans;
    }
}