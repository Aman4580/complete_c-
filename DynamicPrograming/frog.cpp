#include <bits/stdc++.h>
using namespace std;

vector<int> dp; // Memoization table
vector<int> dp1; // Memoization table
vector<int> h;  // Heights of stones
int k;          // Maximum jump length
// top down approach or memorization approach of dp
int f(int i) {
    // Base case: If current index i is out of bounds, return infinity
    if (i >= h.size()) 
        return INT_MAX;

    if (i == h.size() - 1) 
        return 0;
     // dp check if value is calculated then use this value
    if (dp[i] != -1) 
        return dp[i];

    int ans = INT_MAX;

    for (int j = 1; j <= k; j++) {
        if (i + j < h.size()) {
            ans = min(ans, abs(h[i] - h[i + j]) + f(i + j));
        }
    }
    dp[i] = ans; 
    return ans;
}

// bottom up approach
int f1(int i) {
    int n = h.size();
    dp1.resize(100005,INT_MAX);
    dp1[n-1] =0;
    for(int i=n-2;i>=0;i--){
    for (int j = 1; j <= k; j++) {
        if (i + j < h.size()) {
            dp1[i] = min(dp[i], abs(h[i] - h[i + j]) + dp1[i + j]);
        }
    }
    }
    return dp[0];
    }
int main() {
    int n;
    cout << "Enter the number of stones and the maximum jump length: ";
    cin >> n >> k;

    h.resize(n); 
    dp.resize(n, -1); 

    cout << "Enter the heights of stones: ";
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int minCost = f(0);
    int mincos = f1(0);
    if (minCost == INT_MAX) {
        cout << "It's not possible to reach the last stone." << endl;
    } else {
        cout << "Minimum cost to reach the last stone: " << minCost << endl;
    }
    if (mincos == INT_MAX) {
        cout << "It's not possible to reach the last stone." << endl;
    } else {
        cout << "Minimum cost to reach the last stone: " << mincos << endl;
    }
    return 0;
}
