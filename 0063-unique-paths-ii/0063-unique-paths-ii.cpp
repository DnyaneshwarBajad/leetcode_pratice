class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& obstacleGrid,int m,int n,vector<vector<int>>&dp){
        if(i>=m || j>=n){
            return 0;
        }
       
        if(obstacleGrid[m-1][n-1]==1){
            return 0;
        } if(obstacleGrid[i][j]==1){
            return 0;
        }
         if(i==m-1 && j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        

        int d=0, r=0;


            d=solve(i+1,j,obstacleGrid,m,n,dp);
            r=solve(i,j+1,obstacleGrid,m,n,dp);
        
        return dp[i][j]= d+r;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return solve(0,0,obstacleGrid,m,n,dp);
    }
};