#include<bits/stdc++.h>
using namespace std;
   int sum1=0;
int oddSum(int a,int b){
    if(a==b)return sum1+b;
    if(a%2!=0){
        sum1+=a;
    }
    return oddSum(a+1,b);

}
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    int q = min(a,b);
    int e= max(a,b);
    int p= oddSum(q,e);
    cout<<p<<endl;
}