#include<bits/stdc++.h>
using namespace std;
int  reverseArray(char a[] ,int n,int i,int j){
if(i>=n/2){
    return true;
}
if(a[i]!=a[j]) return false;
return reverseArray(a,n,i+1,j-1);

}
int main(){
    int n;
    cout<<"Enter thr size of ayyay"<<endl;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    int p= reverseArray(a,n,i,j);
    cout<<p<<endl;
     for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    return 0;
}