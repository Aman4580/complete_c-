#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr[] = {"aman","shubham","vansh","girl"};
    int n = 4;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}