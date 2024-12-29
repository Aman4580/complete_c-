#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&res){
    int n = res.size();
    for(int i=1;i<n;i++){
    int j = i-1;
    while(j<-1 && res[j]>res[i]){
        res[j+1] = res[j];
        j = j-1;
    }
    }
}
int main(){
    vector<int>res = {7,1,6,2,9,5};
    int n = res.size();
    insertion_sort(res);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}