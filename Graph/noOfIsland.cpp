#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Helper DFS function to explore the island
    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        // Boundary and base conditions for DFS
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] != '1' || vis[r][c] == 1) {
            return;
        }

        // Mark the current cell as visited
        vis[r][c] = 1;

        // Explore all four directions
        dfs(r + 1, c, grid, vis); // down
        dfs(r - 1, c, grid, vis); // up
        dfs(r, c + 1, grid, vis); // right
        dfs(r, c - 1, grid, vis); // left
    }

    // Main function to count the number of islands
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if (rows == 0) return 0; // No grid, no islands
        int cols = grid[0].size();

        // Visited array to keep track of visited cells
        vector<vector<int>> vis(rows, vector<int>(cols, 0));

        int ans = 0; // To count the number of islands
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                // If the cell is land ('1') and not visited
                if (grid[r][c] == '1' && !vis[r][c]) {
                    ans++;  // Increase the count of islands
                    dfs(r, c, grid, vis); // Perform DFS to mark the entire island
                }
            }
        }
        return ans;
    }
};

int main() {
    // Sample input
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    Solution sol;
    int result = sol.numIslands(grid);
    cout << "Number of islands: " << result << endl;  // Expected output: 3
    return 0;
}
