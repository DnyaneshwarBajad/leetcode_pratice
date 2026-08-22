class Solution {
public:
    void dfs(vector<vector<char>>& board,int row,int col,int m,int n){
        if(row<0||col<0||row>=m||col>=n ||board[row][col]!='O'){
            return;
        }
        board[row][col]='#';
        int dr[]={1,-1,0,0};
        int dc[]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int nr=row+dr[k];
            int nc=col+dc[k];
            dfs(board,nr,nc,m,n);
        }
    }
    
    void solve(vector<vector<char>>& board) {
         int m=board.size();
         int n=board[0].size();

         for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                dfs(board,i,0,m,n);
            }
            if(board[i][n-1]=='O'){
                dfs(board,i,n-1,m,n);
            }
         }

          for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                dfs(board,0,i,m,n);
            }
            if(board[m-1][i]=='O'){
                dfs(board,m-1,i,m,n);
            }
         }


         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
                else if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
         }
        
    }
};