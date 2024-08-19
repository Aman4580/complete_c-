#include <bits/stdc++.h>
using namespace std;


int solve(vector<int>&nums,int i,vector<int>&dp){
    if(i>nums.size()) return 0;
    //dp check
    if(dp[i]!=-1) return dp[i];
    int inc = nums[i] + solve(nums,i+2,dp);
    int exc = solve(nums,i+1,dp);
    return dp[i] = max(inc,exc);
}
int main () {
    vector<int>dp(5,-1);
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(9);
    
    cout<<solve(nums,0,dp)<<" ";
    return 0;
}