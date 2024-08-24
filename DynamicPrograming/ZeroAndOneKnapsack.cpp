#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  private:
    int rec(int i, int W, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp) {
        if (i >= val.size()) return 0;
        if (dp[i][W] != -1) return dp[i][W];
        
        int take = 0;
        if (W >= wt[i])
            take = val[i] + rec(i + 1, W - wt[i], wt, val, dp);
        
        int not_take = rec(i + 1, W, wt, val, dp);
        
        return dp[i][W] = max(take, not_take);
    }

  public:
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        vector<vector<int>> dp(val.size() + 1, vector<int>(W + 1, -1));
        return rec(0, W, wt, val, dp);
    }
};

int main() {
    Solution sol;
    
    // Example input
    int W = 50;
    vector<int> wt = {10, 20, 30};
    vector<int> val = {60, 100, 120};
    
    // Expected output: 220
    cout << "Maximum value in knapsack: " << sol.knapSack(W, wt, val) << endl;

    return 0;
}
