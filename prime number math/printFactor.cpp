#include<bits/stdc++.h>
using namespace std;
void  printFactor(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout <<i <<" ";
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout <<n/i <<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number to check prime "<<endl;
    cin>>n;
       printFactor(n);
    return 0;
}