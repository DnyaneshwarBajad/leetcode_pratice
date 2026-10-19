class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int dif=0;
        int mi=INT_MAX;
        int a=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++){

          int diff=arr[i]-arr[i-1];
          mi=min(mi,diff);
          
        }
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])==mi){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        return ans;
    }
};