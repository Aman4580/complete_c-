#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isSafe(int i, int j, int r, int c, vector<vector<int>>& mat, vector<vector<bool>>& visited) {
        if ((i >= 0 && i < r) && (j >= 0 && j < c) && !visited[i][j] && mat[i][j] == 1) {
            return true;
        }
        return false;
    }

    void solve(int mr, int mc, int r, int c, vector<vector<int>>& mat, vector<vector<bool>>& visited, vector<string>& ans, string temp) {
        if (mr == r - 1 && mc == c - 1) {
            ans.push_back(temp);
            return;
        }

        // Down
        int newx = mr + 1;
        int newy = mc;
        if (isSafe(newx, newy, r, c, mat, visited)) {
            visited[newx][newy] = true;
            solve(newx, newy, r, c, mat, visited, ans, temp + 'D');
            visited[newx][newy] = false;
        }

        // Right
        newx = mr;
        newy = mc + 1;
        if (isSafe(newx, newy, r, c, mat, visited)) {
            visited[newx][newy] = true;
            solve(newx, newy, r, c, mat, visited, ans, temp + 'R');
            visited[newx][newy] = false;
        }

        // Left
        newx = mr;
        newy = mc - 1;
        if (isSafe(newx, newy, r, c, mat, visited)) {
            visited[newx][newy] = true;
            solve(newx, newy, r, c, mat, visited, ans, temp + 'L');
            visited[newx][newy] = false;
        }

        // Up
        newx = mr - 1;
        newy = mc;
        if (isSafe(newx, newy, r, c, mat, visited)) {
            visited[newx][newy] = true;
            solve(newx, newy, r, c, mat, visited, ans, temp + 'U');
            visited[newx][newy] = false;
        }
    }

    vector<string> findPath(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        vector<string> ans;
        if (mat[0][0] == 0 || mat[r-1][c-1] == 0) return ans;  // If start or end is blocked
        
        vector<vector<bool>> visited(r, vector<bool>(c, false));
        visited[0][0] = true;
        solve(0, 0, r, c, mat, visited, ans, "");
        return ans;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> result = sol.findPath(mat);

    if (result.empty()) {
        cout << "No path found" << endl;
    } else {
        cout << "Possible paths:" << endl;
        for (string path : result) {
            cout << path << endl;
        }
    }

    return 0;
}
