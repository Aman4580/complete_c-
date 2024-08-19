#include <bits/stdc++.h>
using namespace std;
int solve(int n,int a,int b,int c){
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    int first = solve(n-a,a,b,c);
    int second = solve(n-b,a,b,c);
    int third = solve(n-c,a,b,c);
    return 1+max({first,second,third});

}
int solvetd(int n,int a,int b,int c,vector<int>&dp){
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    //dp check
    if(dp[n]!=-1) return dp[n];
    int first = solve(n-a,a,b,c);
    int second = solve(n-b,a,b,c);
    int third = solve(n-c,a,b,c);
    return dp[n] = 1+max({first,second,third});

}
int solvebu(int n, int a, int b, int c, vector<int>& dp) {    
    for (int i = 1; i <= n; i++) {
        int first = (i - a >= 0) ? dp[i - a] : INT_MIN;
        int second = (i - b >= 0) ? dp[i - b] : INT_MIN;
        int third = (i - c >= 0) ? dp[i - c] : INT_MIN;
        
        dp[i] = 1 + max({first, second, third});
    }
    return  dp[n];
}

int main (){
    int a =10;
    int b =11;
    int c = 3;
    int n =17;
    vector<int>dp(n+1,-1);
    vector<int>dp1(n+1,0);
    //using recursion
    cout<<"answer is this"<<" "<< solve(n,a,b,c)<<endl;
    // using dp top  down
    cout<<"answer is this"<< " "<<solvetd(n,a,b,c,dp)<<endl;
    // using dp bottom up
    cout<<"answer is this"<< " "<<solvebu(n,a,b,c,dp1)<<endl;
}