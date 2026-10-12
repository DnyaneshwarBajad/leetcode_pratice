class Solution {
public:
    bool isvalid(int m, int n, int i, int j, vector<vector<int>>& grid) {
        return (i >= 0 && i < m && j >= 0 && j < n && grid[i][j] == 0);
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int c = 1;
        int m = grid.size();
        int n = grid[0].size();
        int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        queue<pair<int, int>> q;
        if (grid[0][0] == 1 || grid[m - 1][n - 1] == 1)
            return -1;

        q.push({0, 0});
         grid[0][0] = 1; 

        while (!q.empty()) {
            int siz = q.size();
            while (siz--) {
                auto [i, j] = q.front();
                q.pop();

                if (i == m - 1 && j == n - 1)
                    return c;

                for (int d = 0; d < 8; d++) {
                    int n_r = i + dr[d];
                    int n_c = j + dc[d];
                    if (isvalid(m, n, n_r, n_c, grid)) {
                        q.push({n_r, n_c});
                        grid[n_r][n_c] = 1;
                    }
                }
            }c+=1;
        }
        return -1;
    }
};