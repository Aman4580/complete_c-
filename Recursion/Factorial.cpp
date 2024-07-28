#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<0){
        return 0;
    }
    if(n==0 ||n==1){
        return 1;
    }else{
 return n*fact(n-1);
}
}
int main(){
    int n;
    cout<<"Enter the number for factorial "<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}