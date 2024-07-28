#include<bits/stdc++.h>
using namespace std;
void combination(vector<int>ans,int arr[],int target,int n,int idx){
    if(target==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    for(int i=idx;i<n;i++){
        ans.push_back(arr[i]);
        combination(ans,arr,target-arr[i],n,i);
        ans.pop_back();
    }
}
int main(){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    int target =8;
    combination(ans,arr,target,n,0);
    return 0;
}