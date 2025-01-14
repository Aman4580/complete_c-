#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>vec){
    int n = vec.size();
    int first = vec[0];
    int second = INT_MIN;
    int third = INT_MIN;
    for(int i = 1; i < n; i++){
        if(vec[i] > first){
            third = second; //cha
           second = first;
         first = vec[i];
        }
        else if(vec[i] > second){
            third = second;
            second = vec[i];
        }else{
            third = vec[i];
        }
    }
    cout<<" Third max element" << " " << third<<" ";
}
int main(){
    vector<int>vec = {10,11,12,13,14,15,16};
    solve(vec);
    return 0;
}