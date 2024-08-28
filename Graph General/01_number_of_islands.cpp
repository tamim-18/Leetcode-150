class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int isLands = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    bfs(grid, i, j, n, m);
                    isLands++;
                }
            }
        }
        return isLands;
    }

    void bfs(vector<vector<char>>& grid, int i, int j, int n, int m) {
        grid[i][j] = '*'; // Mark as visited
        queue<pair<int, int>> q;
        q.push({i, j});

        while (!q.empty()) {
            auto [x, y] = q.front(); 
            q.pop();

            int dx[] = {-1, 1, 0, 0}; // Up, Down, Left, Right
            int dy[] = {0, 0, -1, 1}; // Up, Down, Left, Right

            for (int k = 0; k < 4; k++) {
                int newX = x + dx[k];
                int newY = y + dy[k];

                if (newX >= 0 && newX < n && newY >= 0 && newY < m && grid[newX][newY] == '1') {
                    grid[newX][newY] = '*'; // Mark as visited
                    q.push({newX, newY});
                }
            }
        }
    }
};
