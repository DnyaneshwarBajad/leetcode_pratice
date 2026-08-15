class Solution {
public:
    int product(int x){
        int ans=1;
        int d=0;
        while(x){
            d=x%10;
            ans*=d;
            x/=10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            if(product(i)%t==0){
                return i;
            }
        }
        return 0;
    }
};