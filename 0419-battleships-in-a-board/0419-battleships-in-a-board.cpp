class Solution {
public:
     void dfs(vector<vector<char>>& grid, int r, int c) {
        int m = grid.size();
        int n = grid[0].size();
        
        if (r < 0 || c < 0 || r >= m || c >= n || grid[r][c] == '.') {
            return ;
        }
        
        grid[r][c] = '.';
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nr = dr[i] + r;
            int nc = dc[i] + c;
    
              dfs(grid, nr, nc);
        }
        
    }
    int countBattleships(vector<vector<char>>& board) {
         int m = board.size();
        int n = board[0].size();
        int count=0;
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            if(board[i][j]=='X'){
                count++;
                dfs(board,i,j);
            }
         }
         return count;

    }
};