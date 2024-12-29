#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>&res){
    int n = res.size();
    for(int i=1;i<n;i++){
        // for round 0 t0 n-1
        bool flag = false;
        for(int j=0;j<n-i;j++){
        if(res[j]>res[j+1]){
            swap(res[j],res[j+1]);
            flag = true;
        }
        }
        if(flag = false) break;
    }
}
int main(){
    vector<int>res = {1,2,3,4,5,6};
    int n = res.size();
    bubble_sort(res);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}