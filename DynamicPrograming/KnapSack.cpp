#include <bits/stdc++.h>
using namespace std;
int solveRecursion(vector<int>&value,int index,vector<int>&weight,int capacity) {
if(index==value.size() || capacity==0) return 0;
int inc = 0;
if(capacity>=weight[index]){
    inc = value[index]+solveRecursion(value,index+1,weight,capacity-weight[index]);
}
int exc = 0+solveRecursion(value,index+1,weight,capacity);
return max(inc,exc);
}


int solveBottomUp(vector<int>&value,int index,vector<int>&weight,int capacity,vector<vector<int>>&dp) {
if(index==value.size() || capacity==0) return 0;
if(dp[index][capacity]!=-1) return dp[index][capacity];
int inc = 0;
if(capacity>=weight[index]){
    inc = value[index]+solveBottomUp(value,index+1,weight,capacity-weight[index],dp);
}
int exc = 0+solveBottomUp(value,index+1,weight,capacity,dp);
return dp[index][capacity] = max(inc,exc);
}

int main (){
    vector<int>val,wt;
    val.push_back(60);
    val.push_back(100);
    val.push_back(120);

    wt.push_back(10);
    wt.push_back(20);
    wt.push_back(30);
    int capacity = 50;
    int n =3;
    vector<vector<int>> dp(n+1, vector<int>(capacity + 1, -1));
    
    cout<<"answer is this "<< " "<<solveRecursion(val,0,wt,capacity)<<endl;
    
    cout<<"answer is this "<< " "<<solveBottomUp(val,0,wt,capacity,dp)<<endl;
} 