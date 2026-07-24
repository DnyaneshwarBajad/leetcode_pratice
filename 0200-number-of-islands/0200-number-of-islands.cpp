class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c){
        int n=grid.size();
        int m=grid[0].size();

        if(r<0 ||c<0 ||r>=n||c>=m || grid[r][c]!='1'){
            return;
        }
        grid[r][c]='0';

        int dr[]={1,-1,0,0};
        int dc[]={0,0,1,-1};

        for(int i=0;i<4;i++){
            int nr=dr[i]+r;
            int nc=dc[i]+c;

            dfs(grid,nr,nc);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }

        return count;
        

    }
};