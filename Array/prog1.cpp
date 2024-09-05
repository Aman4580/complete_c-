#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,4,6,1,2,10};
    int ans = INT_MAX;
    for(int i=1;i<v.size()-1;i++){
        if(v[i]>v[i-1] && v[i]<v[i+1]){
            ans = min(ans,v[i]);
        }
        
    }
    cout<<" The answer is this"<<ans;
    return 0;
}