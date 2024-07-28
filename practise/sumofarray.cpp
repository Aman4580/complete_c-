#include<bits/stdc++.h>
using namespace std;
int sum=0;
int ArraySum(int a[], int n, int i) {
    if (i == n) {
        return sum;
    }
    sum += a[i];
    return ArraySum(a, n, i + 1);
}
int main(){
    int n;
    cout<<"Enter thr size of ayyay"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int sum = ArraySum(a, n, 0);
     cout<< sum;
    return 0;
}

