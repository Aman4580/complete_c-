#include <bits/stdc++.h>
using namespace std;
vector<int>dp;
vector<int>dpbu;
int f(int n){
  if(n==1) return 0;
  if(n==2 || n==3) return 1;
  return 1+min(f(n-1),min((n%2==0? f(n/2): INT_MAX),(n%3==0? f(n/3) : INT_MAX)));
}
int td(int n){
  if(n==1) return 0;
  if(n==2 || n==3) return 1;
  if(dp[n]!=-1) return dp[n];
  return dp[n]= (1+min(td(n-1),min((n%2==0? td(n/2): INT_MAX),(n%3==0? td(n/3) : INT_MAX))));
}
int bu(int n){
  dpbu.resize(n+1,-1);
    dpbu[1]=0;
    dpbu[2] = dpbu[3] = 1;
    for(int i=4;i<=n;i++){
      dpbu[i] = (1+min(td(i-1),min((i%2==0? td(i/2): INT_MAX),(i%3==0? td(i/3) : INT_MAX))));
    }
    return dpbu[n];
 
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    dp.resize(n+1,-1);
    cout<<f(n)<<" ";
    cout<<td(n)<<" ";
    cout<<bu(n)<<" ";
    return 0;
}