class Solution {
public:
    // Directions: Left, Right, Up, Down
    int dr[4] = {0, 0, -1, 1};
    int dc[4] = {-1, 1, 0, 0};

    void dfs(vector<vector<char>>& grid, int row, int col) {
        int R = grid.size();
        int C = grid[0].size();

        // Mark current cell as visited
        grid[row][col] = '0';

        // Check all 4 directions
        for (int i = 0; i < 4; i++) {
            int nr = row + dr[i];
            int nc = col + dc[i];

            // Valid cell and land
            if (nr >= 0 && nr < R &&
                nc >= 0 && nc < C &&
                grid[nr][nc] == '1') {

                dfs(grid, nr, nc);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        int islands = 0;

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {

                if (grid[i][j] == '1') {
                    islands++;          // Found a new island
                    dfs(grid, i, j);    // Mark whole island visited
                }
            }
        }

        return islands;
    }
};