#include<iostream>
using namespace std;

int power(int x , int n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0){
     return power(x*x,n/2);
    }
    else{
     return x*power(x*x,n/2);
    }
}
int main (){
    int x,n;
    cout<<"Enter the value of base x :";
    cin>>x;
    cout<<"Enter the power ";
    cin>>n;
    cout<<power(x,n);
    return 0;
}