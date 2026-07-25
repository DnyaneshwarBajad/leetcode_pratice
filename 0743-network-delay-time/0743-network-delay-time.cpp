class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int,int>>> adj(n + 1);

        for(auto &it : times)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];

            adj[u].push_back({v, w});
        }

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        vector<int> dis(n + 1, 1e9);

        dis[k] = 0;
        pq.push({0, k});

        while(!pq.empty())
        {
            auto [currDist, node] = pq.top();
            pq.pop();

            if(currDist > dis[node])
                continue;

            for(auto &it : adj[node])
            {
                int no = it.first;
                int wt = it.second;

                if(dis[no] > currDist + wt)
                {
                    dis[no] = currDist + wt;
                    pq.push({dis[no], no});
                }
            }
        }

        int ans = 0;

        for(int i = 1; i <= n; i++)
        {
            if(dis[i] == 1e9)
                return -1;

            ans = max(ans, dis[i]);
        }

        return ans;
    }
};