#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int>ans,int n,int arr[],int ind){
    if(ind==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return ;
    }
    subarray(ans,n,arr,ind+1);
    if(ans.size()==0 || ans[ans.size()-1]==arr[ind-1]){
        ans.push_back(arr[ind]);
        subarray(ans,n,arr,ind+1);
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    subarray(ans,n,arr,0);
    return 0;
}