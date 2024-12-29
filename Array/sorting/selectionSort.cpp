#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&res){
    int n = res.size();
    for(int i=0;i<n-1;i++){
       int min_index = i;
        for(int j=i+1;j<n;j++){
        if(res[min_index]>res[j]){
            min_index = j;
        }
        }
        swap(res[min_index],res[i]);
    }
}
int main(){
    vector<int>res = {7,1,6,2,9,5};
    int n = res.size();
    selection_sort(res);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}