#include<bits/stdc++.h>
using namespace std;
int  reverseArray(int a[] ,int n,int i,int j){
if(i>=j){
    return 0;
}
swap(a[i],a[j]);
return reverseArray(a,n,i+1,j-1);

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
    int j=n-1;
    reverseArray(a,n,i,j);
     for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    return 0;
}