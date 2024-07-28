#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,5,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    cout<<mp[2];
    return 0;
}