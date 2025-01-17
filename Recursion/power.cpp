#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0){
    int ans=power(a,b/2);
    return ans*ans;
    }
     if(b%2!=0){
    int ans=power(a,b/2)*a;
    return ans*ans;
    }
}
int main(){
   int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}