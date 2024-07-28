#include<bits/stdc++.h>
using namespace std;
// bottom up dp
vector<vector<int>>dp;
int lcs(string &s1,string &s2,int i,int j){
if(i>=s1.size()) return 0;
if(j>=s2.size()) return 0;
if(dp[i][j]!=-1) return dp[i][j];
if(s1[i]==s2[j]){
    return dp[i][j]= 1+lcs(s1,s2,i+1,j+1);
}else{
    return dp[i][j]=max(lcs(s1,s2,i+1,j),lcs(s1,s2,i,j+1));
}
}
int main(){
    dp.clear();
    dp.resize(1005,vector<int>(1005,-1));
    string s1,s2;
    cin>>s1>>s2;
    cout<< lcs(s1,s2,0,0);
    return 0;
}