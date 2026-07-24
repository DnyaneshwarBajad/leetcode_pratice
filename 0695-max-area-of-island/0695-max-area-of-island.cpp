class Solution {
public:
    void dfs(vector<vector<int>>& grid,int r,int c,int &count){
        int m = grid.size();
        int n = grid[0].size();
        
        if (r < 0 || c < 0 || r >= m || c >= n || grid[r][c] == 0) {
            return ;
        }
        count ++;
        grid[r][c] = 0;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nr = dr[i] + r;
            int nc = dc[i] + c;
            dfs(grid, nr, nc,count);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
       int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    int count=0;
                   dfs(grid,i,j,count);
                    ans=max(ans,count);

                }
            }
        }
        return ans;
    }
};