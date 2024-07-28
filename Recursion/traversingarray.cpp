#include<bits/stdc++.h>
using namespace std;
void TArray(int a[] ,int n,int i){
if(i == n) return;
cout<<a[i]<<" ";
return TArray(a,n,i+1);

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
    TArray(a,n,i);
    return 0;
}