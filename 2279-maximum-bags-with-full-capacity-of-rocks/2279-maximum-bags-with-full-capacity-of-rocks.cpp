class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int>req(n,0);

        for(int i=0;i<n;i++){
            req[i]=capacity[i]-rocks[i];
        }
        int v=additionalRocks;
        int c=0;
        sort(req.begin(),req.end());
        for(int i=0;i<n;i++){
            if(req[i]==0){
                c++;
            }
            else{
                if(v>=req[i] ){
                    v-=req[i];
                    c+=1;
                }
                
            }
        }
        return c;


        
    }
};