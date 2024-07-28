#include<bits/stdc++.h>
using namespace std;
#define mo 1e+7
int fib(long long n){
    if(n==0)return 0;
    if(n==1) return 1;
    return (fib(n-1)+fib(n-2))/mo;
}
int main(){
    long long n;
    cout<<"Enter the number for fibonachi series ";
    cin>>n;
    cout<<fib(n);
    return 0;
}