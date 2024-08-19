#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums, int target) {
    if (target == 0) return 0;
    if (target < 0) return INT_MAX;
    
    int mini = INT_MAX;
    
    for (int i = 0; i < nums.size(); i++) {
        int ans = solve(nums, target - nums[i]);
        if (ans != INT_MAX) { 
            mini = min(mini, ans + 1);
        }
    }
    
    return mini;
}

int solvetd(vector<int>& nums, int n, vector<int>& dp) {
    if (n == 0) return 0;
    if (n < 0) return INT_MAX; 
    
   
    if (dp[n] != -1) return dp[n];
    
    int mini = INT_MAX; 

    for (int i = 0; i < nums.size(); i++) {
        int ans = solvetd(nums, n - nums[i], dp);
        if (ans != INT_MAX) { 
            mini = min(mini, ans + 1);
        }
    }

    dp[n] = mini;
    return dp[n];
}

int solvebu(vector<int>& nums, int n, vector<int>& dp1) {
 dp1[0] =0;
 for (int i = 1; i <= n; i++) {
    int mini = INT_MAX; 
    for (int k = 0; k < nums.size(); k++) {
        int ans = dp1[i - nums[k]];
        if (ans != INT_MAX) { 
            mini = min(mini, ans + 1);
        }
    }

    dp1[i] = mini;
 }
    return dp1[n];
}

int main (){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    int target =7;
    vector<int>dp(target+1,-1);
    vector<int>dp1(target+1,INT_MAX);
    //using recursion
    cout<<"answer is this "<<" "<< solve(nums,target)<<endl;
    // using dp top  down
    cout<<"answer is this "<< " "<<solvetd(nums,target,dp)<<endl;
    // using dp bottom up
    cout<<"answer is this "<< " "<<solvebu(nums,target,dp1)<<endl;
} 