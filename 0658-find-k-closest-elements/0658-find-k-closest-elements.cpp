class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         priority_queue<
    pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>
> mh;

 // {distance, node}
          vector<int>ans;
          for(auto i:arr){
            mh.push({abs(i-x),i});
          }
          while(k && !mh.empty()){
            ans.push_back(mh.top().second);
            mh.pop();
            k--;


          }
              sort(ans.begin(), ans.end());
          return ans;
    }
};