#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1 || n<0) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number to check prime "<<endl;
    cin>>n;
    cout<<(isPrime(n));
    return 0;
}