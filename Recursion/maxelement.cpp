#include<bits/stdc++.h>
using namespace std;
void maxele(int a[] ,int n,int i,int max){
if(i == n){
    cout<<max<<endl;
    return;
}
if(max<a[i]) 
max = a[i];
return maxele(a,n,i+1,max);

}
int main(){
    int n;
    cout<<"Enter thr size of ayyay"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    maxele(a,n,i,INT_MIN);
    return 0;
}