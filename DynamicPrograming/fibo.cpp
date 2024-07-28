#include <bits/stdc++.h>
using namespace std;

vector<int>dp;
int fiboNum(int n){
    if(n==0 || n==1) return n;
    //dp check
    if(dp[n]!=-1) return dp[n];
    return dp[n] = fiboNum(n-1) + fiboNum(n-2);
}
int main () {
    int n;
    dp.clear();
    dp.resize(n+1,-1);
    cout<<"Enter a Number "<<" ";
    cin>>n;
    cout<<fiboNum(n)<<" ";
    return 0;
}