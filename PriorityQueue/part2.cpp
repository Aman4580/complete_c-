#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>nums = {10,9,45,-2,6,0,7};
    priority_queue<int>hpMax;
    priority_queue<int,vector<int>,greater<int>> hp;
    priority_queue<int,vector<int>,greater<int>> hpmin(nums.begin(),nums.end());
    hp.push(10);
    hp.push(12);
    hp.push(-5);
    hp.push(4);
    cout<<hpmin.top()<<endl; 
    return 0;
}